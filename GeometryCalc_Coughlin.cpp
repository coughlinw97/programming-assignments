// William Coughlin
// Calculates the area of a circle, rectangle and triangle, selected by user input
// Assignment for college programming class

#include <iostream>
#include <cmath>

int main() {
	std::cout << "==================================\n";
	std::cout << "WELCOME TO THE GEOMETRY CALCULATOR\n";
	std::cout << "==================================\n";

	int userSelection;

	do {
		std::cout << "Geometry Calculator\n";
		std::cout << "\t1. Calculate the Area of a Circle\n";
		std::cout << "\t2. Calculate the Area of a Rectangle\n";
		std::cout << "\t3. Calculate the Area of a Triangle\n";
		std::cout << "\t4. Quit";
		std::cout << "\tEnter your choice (124): ";
		std::cin >> userSelection;
		std::cout << std::endl;

		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore();
		}

		if (userSelection == 1) {
			double radius;

			std::cout << "Enter the radius of the circle: ";
			std::cin >> radius;

			if (std::cin.fail()) {
				std::cout << "Invalid input...\n";
				std::cin.clear();
				std::cin.ignore();
			}
			else {
				double area = 3.14159 * (std::pow(radius, 2));

				std::cout << "\nThe radius of the circle is " << area << std::endl;
			}
		}
		else if (userSelection == 2) {
			double length, width;

			std::cout << "Enter the length of the rectangle: ";
			std::cin >> length;

			if (std::cin.fail()) {
				std::cout << "Invalid input...\n";
				std::cin.clear();
				std::cin.ignore();
			}
			else {
				std::cout << "\nEnter the width of the rectangle: ";
				std::cin >> width;

				if (std::cin.fail()) {
					std::cout << "Invalid input...\n";
					std::cin.clear();
					std::cin.ignore();
				}
				else {
					double area = length * width;

					std::cout << "\nThe area of the rectangle is " << area << std::endl;
				}
			}
		}
		else if (userSelection == 3) {
			double base, height;

			std::cout << "Enter the length of the triangle's base: ";
			std::cin >> base;

			if (std::cin.fail()) {
				std::cout << "Invalid input...\n";
				std::cin.clear();
				std::cin.ignore();
			}
			else {
				std::cout << "\nEnter the height of the triangle: ";
				std::cin >> height;

				if (std::cin.fail()) {
					std::cout << "Invalid input...\n";
					std::cin.clear();
					std::cin.ignore();
				}
				else {
					double area = 0.5 * (base * height);

					std::cout << "\nThe area of the triangle is " << area << std::endl;
				}
			}
		}
		else if (userSelection == 4) {
			
		}
		else
			std::cout << "Invalid input...\n";

		std::cout << std::endl;

	} while (userSelection != 4);

	return 0;
}