#include "iostream"
int main()
{
	char operation;
	int a = 0;
	int b = 0;
	std::cout << "enter 1 ";
	std::cin >> a;
	std::cout << "enter 2 ";
	std::cin >> b;
	std::cout << "enter operation ";
	std::cin >> operation;
	switch(operation)
	{
	case '+': std::cout << "a + b = " << a + b << '\n';
	break;
	case '-': std::cout << "a - b = " << a - b << '\n';
	break;
	case '*': std::cout << "a * b = " << a * b << '\n';
	break;
	case '/': std::cout << "a / b = " << a / b << '\n';
	default:
		std::cout << "Error\n";
	}
	return 0;
}
