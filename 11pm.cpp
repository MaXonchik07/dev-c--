#include "iostream"
int main()
{
char operation;
	int a = 0;
	int b = 0;
	std::cout << "Enter first number:";
	std::cin >> a;
	std::cout << "Enter second number:";
	std::cin >> b;
	std::cout << "Enter operaion:";
	std::cin >> operation;
	switch(operation)
	{ 
	case'+' : std::cout << "a + b = " << a + b << '\n';
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
