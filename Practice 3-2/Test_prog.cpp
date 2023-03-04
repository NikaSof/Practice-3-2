#include <iostream>
#include <locale>
#include "Rational 3-2.h"

int main() {
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "en_EN.utf8");

	int a, b;
	std::cin >> a >> b;
	rational drob(a, b);
	drob.set(a, b);
	drob.show();
}