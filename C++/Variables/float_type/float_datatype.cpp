#include <iostream>

int main()
{
	float salary_annual;
	std::cout << "Enter your annual salary: ";
	std::cin >> salary_annual;
	float salary_monthly = salary_annual / 12;
	std::cout << salary_monthly << std::endl;
}
