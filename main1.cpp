#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	int number = 0;
	int sum = 0;
	do
	{
		std::cout << "¬ведите целое число или число '0', чтобы закончить:" << std::endl;
		std::cin >> number;
		sum += number;

	} while (number != 0);

	std::cout << "—умма = " << sum << std::endl;

	return EXIT_SUCCESS;
}