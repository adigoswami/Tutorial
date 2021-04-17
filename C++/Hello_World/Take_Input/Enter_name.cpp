#include <iostream>

int main()
{
	char first_name[15];
	char last_name[15];
	std::cout << "Enter your first name: ";
	std::cin >> first_name;
	std::cout << "Enter your last name: ";
	std::cin >> last_name;
	
	std::cout << "Hello, "<< first_name << " " << last_name << "!" << std::endl;
}
