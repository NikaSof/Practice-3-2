#include <iostream>
#include <locale>
#include "Rational 3-3.h"

int main() {
	setlocale(LC_ALL, "Russian");
	//setlocale(LC_ALL, "en_EN.utf8");

	int n;
	std::cout << "Введите количество дробей: \n";
	std::cin >> n;
	rational* arr = new rational[n];
	for (int i = 0; i < n; i++) {
		int a, b;
		std::cout << "Введите числитель и знаменатель " << i + 1 << " дроби " << ": \n";
		std::cin >> a >> b;
		arr[i].set(a, b);
	}

	rational sum;
	for (int i = 0; i < n; i++) {
		sum = sum + arr[i];
	}
	std::cout << "Сумма: \n";
	sum.show();
	std::cout << "\n";

	rational raz = arr[0] - arr[1];
	std::cout << "Разность: \n";
	raz.show();
	std::cout << "\n";

	std::cout << "Инкремент: \n";
	arr[0]++;
	arr[0].show();
	std::cout << "\n";

	std::cout << "Сравнение: \n";
	if (arr[0] > arr[1]) std::cout << "Первая дробь больше второй.\n";
	else if (arr[0] == arr[1]) std::cout << "Дроби равны.\n";
	else std::cout << "Первая дробь меньше второй.\n";

	arr[0] = arr[1];
	std::cout << "Присваивание: \n";
	arr[0].show();

	delete[] arr;
	return 0;
}