#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	int number = 0;
	int sum = 0;
	int last_digit = 0;
	std::cout << "¬ведите целое число:" << std::endl;
	std::cin >> number;
	while (number != 0)
	{
		last_digit = number % 10;
		sum += last_digit;
		number /= 10;
	}
	std::cout << sum << std::endl;
	return EXIT_SUCCESS;
}