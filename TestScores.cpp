// William Coughlin

#include <iostream>
#include <iomanip>

void SortArrAscending(double*, const int);
double Average(double*, const int);
void DisplayArr(const double*, const int);

int main() {
	int numScores;
	
	std::cout << "Enter the number of scores you wish to input: ";
	std::cin >> numScores;

	double* scoresArr = new double[numScores];

	for (int index = 0; index < numScores; index++) {
		double score = 0;

		std::cout << "\nEnter test score #" << index + 1 << ": ";
		std::cin >> score;

		while (score < 0) {
			std::cout << "\nINVALID: You cannot enter a negative";
			std::cout << "\nEnter test score #" << index + 1 << ": ";
			std::cin >> score;
		}

		*(scoresArr + index) = score;
	}

	SortArrAscending(scoresArr, numScores);

	std::cout << std::setprecision(5) << "\nThe average test score was " << Average(scoresArr, numScores);

	DisplayArr(scoresArr, numScores);
}


void SortArrAscending(double* arr, const int size) {
	for (int max = size - 1; max > 0; max--) {
		for (int index = 0; index < max; index++) {
			if (*(arr + index) > *(arr + (index + 1))) {
				std::swap(*(arr + index), *(arr + (index + 1)));
			}
		}
	}
}

double Average(double* arr, const int num) {
	double total = 0;
	double average;

	for (int index = 0; index < num; index++) {
		total += *(arr + index);
	}

	average = (total / num);

	return average;
}

void DisplayArr(const double* arr, const int size) {
	for (int index = 0; index < size; index++) {
		std::cout << "\nTest Score #" << index + 1 << ": " << *(arr + index) << std::endl;
	}
}
