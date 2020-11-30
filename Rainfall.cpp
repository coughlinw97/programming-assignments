// William Coughlin
// Program for the rainfall statistics for the year
// User will be able to add rainfall for each month of the year and get the total and average rainfall and the highest and lowest months of rainfall
#include <iostream>

int main() {
	const int MONTHS = 12;
	double rainfall[MONTHS] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	double TOTAL = 0, AVERAGE = 0, HIGHEST = 0, LOWEST = 1000;

	// Get user input for rainfall each month
	for (double &month : rainfall) {
		std::cout << "Enter the rainfall for month " << month << ": ";
		std::cin >> month;
		std::cout << std::endl;

		// test that the value is non-negative
		if (month < 0) {
			std::cout << "You cannot enter a negative value.  Please enter a non-negative value: ";
			std::cin >> month;
			std::cout << std::endl;
		}
	}

	// Add all rainfall together to get total rainfall
	for (double MONTH : rainfall) {
		TOTAL += MONTH;
	}

	std::cout << "The total rainfall for the year was: " << TOTAL << std::endl;

	// Get average rainfall for year
	AVERAGE = (TOTAL / 12);

	std::cout << "The average rainfall for the year was: " << AVERAGE << std::endl;

	// Find highest rainfall of the year
	for (double month : rainfall) {
		if (month > HIGHEST)
			HIGHEST = month;
	}

	std::cout << "The highest rainfall of the year was: " << HIGHEST << std::endl;

	// Find lowest rainfall of the year
	for (double month : rainfall) {
		if (month < LOWEST)
			LOWEST = month;
	}

	std::cout << "The lowest rainfall of the year was: " << LOWEST << std::endl;
}