// if, else

#include <iostream>
using namespace std;

int main() {
	int score;
	std::cout << "Enter your Score: ";
	std::cin >> score;

	if (score >= 90) {
		std::cout << "Grade A" << std::endl;
	}else if (score >= 80) {
		std::cout << "Grade B" << std::endl;
	}
	else if (score>=70) {
		std::cout << "Grade C" << std::endl;

	}
	else {
		std::cout << "Grade F" << std::endl;
	}

	return 0;
}