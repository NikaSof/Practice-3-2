#include <iostream>
#include <locale>
#include "Rational 3-3.h"

int main() {
	setlocale(LC_ALL, "Russian");
	//setlocale(LC_ALL, "en_EN.utf8");

	int n;
	std::cout << "������� ���������� ������: \n";
	std::cin >> n;
	rational* arr = new rational[n];
	for (int i = 0; i < n; i++) {
		int a, b;
		std::cout << "������� ��������� � ����������� " << i + 1 << " ����� " << ": \n";
		std::cin >> a >> b;
		arr[i].set(a, b);
	}

	rational sum;
	for (int i = 0; i < n; i++) {
		sum = sum + arr[i];
	}
	std::cout << "�����: \n";
	sum.show();
	std::cout << "\n";

	rational raz = arr[0] - arr[1];
	std::cout << "��������: \n";
	raz.show();
	std::cout << "\n";

	std::cout << "���������: \n";
	arr[0]++;
	arr[0].show();
	std::cout << "\n";

	std::cout << "���������: \n";
	if (arr[0] > arr[1]) std::cout << "������ ����� ������ ������.\n";
	else if (arr[0] == arr[1]) std::cout << "����� �����.\n";
	else std::cout << "������ ����� ������ ������.\n";

	arr[0] = arr[1];
	std::cout << "������������: \n";
	arr[0].show();

	delete[] arr;
	return 0;
}