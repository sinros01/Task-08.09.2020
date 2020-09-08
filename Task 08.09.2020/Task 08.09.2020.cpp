#include <iostream>
#include <string>

int main() {
	char rep = 'y';
	do {
			int shirt = 0;
			int suit = 0;
			int pants = 0;
			int sh = 150;
			int su = 100;
			int pa = 200;
			int ans1 = 0;
			int ans2 = 0;
			int ans3 = 0;
			std::cout << "How many shirts do you have?" << std::endl;
			std::cin >> shirt;
			std::cout << "How many suits do you have?" << std::endl;
			std::cin >> suit;
			std::cout << "How many pants do you have?" << std::endl;
			std::cin >> pants;
			
			if (shirt > 0) {
				ans1 = shirt * sh;
			}
			if (suit > 0) {
				ans2 = suit * su;
			}
			if (pants > 0) {
				ans3 = pants * pa;
			}
			std::cout << "your total sum:"<< ans1 + ans2 + ans3 + ((ans1 + ans2 + ans3) / 4) << "NOK" << std::endl;
			std::cout << "Do you want to continue?" << std::endl;
			std::cout << "y = yes" << std::endl;
			std::cout << "n = no" << std::endl;
			std::cin >> rep;
	} while (rep == 'y');
}