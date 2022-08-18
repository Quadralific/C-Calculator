#include <iostream>

int main() {
	int* i = new int();
	int* j = new int();
	char* operation = new char();
	std::cout << "Enter a number: ";
	std::cin >> *i;
	std::cout << "Enter a second number: ";
	std::cin >> *j;
	std::cout << "Enter a operation (+, -, *, /): ";
	std::cin >> *operation;
	switch (*operation) {
	case '+':
		std::cout << "The sum is " << *i + *j;
		break;
	case '-':
		std::cout << "The difference is " << *i - *j;
		break;
	case '*':
		std::cout << "The product is " << *i * *j;
		break;
	case '/':
		std::cout << "The quotinent is " << *i / *j;
		break;
	default:
		std::cout << "Invalid Operation!!!";
	}
	delete i;
	delete j;
	delete operation;
	return 0;
}
