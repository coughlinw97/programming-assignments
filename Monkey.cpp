// William Coughlin
// Monkey Business
// Program will keep track of the amount of pounds 3 monkeys eat at a local zoo each day during the week, and report the average, lowest, and greatest amount of food eaten during the week.

#include <iostream>

const int ROW_MONKEY = 3;
const int COL_DAY = 5;
double MONKEYS[ROW_MONKEY][COL_DAY];

void CreateReport(double, double, double);
double Average(double[ROW_MONKEY][COL_DAY]);
double Lowest(double[ROW_MONKEY][COL_DAY]);
double Highest(double[ROW_MONKEY][COL_DAY]);

int main() {
	// Get user input for food each monkey eats during the week
	for (int monkey_count = 1; monkey_count < ROW_MONKEY + 1; monkey_count++) {
		std::cout << "Enter the amount of pounds monkey " << monkey_count << " ate on...\n";

		for (int day_count = 1; day_count < COL_DAY + 1; day_count++) {
			std::cout << "\tDay " << day_count << ": ";
			std::cin >> MONKEYS[monkey_count - 1][day_count - 1];
			std::cout << std::endl;

			// input validation: accept non-negative numbers
			if (MONKEYS[monkey_count - 1][day_count - 1] < 0) {
				std::cout << "\tInvalid input: You cannot input a negative number\n";
				std::cout << "\tPlease reenter the amount of pounds of food monkey " << monkey_count << " ate on day " << day_count << ": ";
				std::cin >> MONKEYS[monkey_count][day_count];
				std::cout << std::endl;
			}
		}
	}

	// Generate report of average, lowest, and highest amount of food eaten during the week
	CreateReport(Average(MONKEYS), Lowest(MONKEYS), Highest(MONKEYS));
}

void CreateReport(double average, double lowest, double highest) {
	std::cout << "Generating report...\n\n";
	std::cout << "The average food consumption for the week was " << average << " pounds\n";
	std::cout << "The least amount of food consumed during the week was " << lowest << " pounds\n";
	std::cout << "The greatest amount of food consumed during the week was " << highest << " pounds\n";
}

double Average(double monkeys[ROW_MONKEY][COL_DAY]) {
	double average = 0;
	int days = 0;
	for (int row = 0; row < ROW_MONKEY; row++) {
		for (int col = 0; col < COL_DAY; col++) {
			average += monkeys[row][col];
			days++;
		}
	}
	return average = (average / days);
}

double Lowest(double monkeys[ROW_MONKEY][COL_DAY]) {
	double lowest = monkeys[0][0];
	
	for (int row = 0; row < ROW_MONKEY; row++) {
		for (int col = 0; col < COL_DAY; col++) {
			if (monkeys[row][col] < lowest && monkeys[row][col] >= 0) {
				lowest = monkeys[row][col];
			}
		}
	}
	return lowest;
}

double Highest(double monkeys[ROW_MONKEY][COL_DAY]) {
	double highest = monkeys[0][0];

	for (int row = 0; row < ROW_MONKEY; row++) {
		for (int col = 0; col < COL_DAY; col++) {
			if (monkeys[row][col] < highest) {
				highest = monkeys[row][col];
			}
		}
	}
	return highest;
}
