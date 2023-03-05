#include <iostream>
#include <locale>
#include "Rational 3-3.h"

int main() {
	setlocale(LC_ALL, "Russian");
	//setlocale(LC_ALL, "en_EN.utf8");

	int n;
	std::cout << "Ââåäèòå êîëè÷åñòâî äðîáåé: \n";
	std::cin >> n;
	rational* arr = new rational[n];
	for (int i = 0; i < n; i++) {
		int a, b;
		std::cout << "Ââåäèòå ÷èñëèòåëü è çíàìåíàòåëü " << i + 1 << " äðîáè " << ": \n";
		std::cin >> a >> b;
		arr[i].set(a, b);
	}

	rational sum;
	for (int i = 0; i < n; i++) {
		sum = sum + arr[i];
	}
	std::cout << "Ñóììà: \n";
	sum.show();
	std::cout << "\n";

	rational raz = arr[0] - arr[1];
	std::cout << "Ðàçíîñòü: \n";
	raz.show();
	std::cout << "\n";

	std::cout << "Èíêðåìåíò: \n";
	arr[0]++;
	arr[0].show();
	std::cout << "\n";

	std::cout << "Ñðàâíåíèå: \n";
	if (arr[0] > arr[1]) std::cout << "Ïåðâàÿ äðîáü áîëüøå âòîðîé.\n";
	else if (arr[0] == arr[1]) std::cout << "Äðîáè ðàâíû.\n";
	else std::cout << "Ïåðâàÿ äðîáü ìåíüøå âòîðîé.\n";

	arr[0] = arr[1];
	std::cout << "Ïðèñâàèâàíèå: \n";
	arr[0].show();

	delete[] arr;
	return 0;
}
