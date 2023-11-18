#include <iostream>

using namespace std;
void vvod(int *a, int n) {
	int i = 0;
	while (i < n) {
		cin >> a[i];
		i++;
	}
}
void chet(int *a, int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			cout << a[i] << " ";
		}
	}
}
void nechet(int *a, int n) {
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] % 2 != 0) {
			cout << a[i] << " ";
		}
	}
}
// Вариант 8 Дан целочисленный массив размера N. Вывести вначале все содержащиеся в данном массиве четные числа в порядке возрастания их индексов,
// а затем — все нечетные числа в порядке убывания их индексов.
int main() {
	setlocale(LC_ALL, "ru");
	int n;
	cout << "Введите кол-во элементов:";
	cin >> n;
	int *a = new int[n];

	cout << "Введите значения:";
	vvod(a, n);

	cout << "Чётные элементы:";
	chet(a, n);

	cout << endl << "Нечётные элементы:";
	nechet(a, n);

	delete[] a;
}