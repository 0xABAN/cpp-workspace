#include <iostream>

int main() {
	int score; 

	std::cout << "Score (0-100): "; 
	std::cin >> score; 

	if (score >= 90) {
		std::cout << "Grade: A\n"; 
	} else if (score >= 80) { 
		std::cout << "Grade: B\n"; 
	} else if (score >= 70) { 
		std::cout << "Grade: C\n"; 
	} else if (score >= 60) { 
		std::cout << "Grade: D\n"; 
	} else {
		std::cout << "Grade: F\n"; 
	}
	
	if (score >= 60) { 
		std::cout << "Pass\n"; 
	} else {
		std::cout << "Fail\n"; 
	}

	return 0; 
}
