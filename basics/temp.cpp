#include <iostream> 

int main() { 
	double fahrenheit; 
	double celsius; 

	std::cout << "Temp in Fahrenheit: "; 
	std::cin >> fahrenheit; 

	celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

	std::cout << fahrenheit << "F = " << celsius << "C\n"; 
	return 0; 
}
