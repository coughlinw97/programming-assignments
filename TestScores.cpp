// William Coughlin

#include <iostream>
#include <iomanip>
#include <string>

void SortArrAscending(double*, std::string*, const int);
double Average(double*, const int);
void DisplayArr(const double*, const std::string*, const int);

int main() {
	int numScores;
	
	std::cout << "Enter the number of scores you wish to input: ";
	std::cin >> numScores;

	double* scoresArr = new double[numScores];
	std::string* namesArr = new std::string[numScores];

	for (int index = 0; index < numScores; index++) {
		int score;
		std::string student;

		std::cout << "\nEnter name of student for test #" << index + 1 << ": ";
		std::cin >> student;
		*(namesArr + index) = student;

		std::cout << "\nEnter score for test #" << index + 1 << ": ";
		std::cin >> score;

		while (score < 0) {
			std::cout << "\nINVALID: You cannot enter a negative";
			std::cout << "\nEnter test score #" << index + 1 << ": ";
			std::cin >> score;
		}

		*(scoresArr + index) = score;
	}

	SortArrAscending(scoresArr, namesArr, numScores);

	std::cout << std::setprecision(4) << "\nThe average test score was " << Average(scoresArr, numScores) << std::endl;

	DisplayArr(scoresArr, namesArr, numScores);
}


void SortArrAscending(double* scoreArr, std::string* nameArr, const int size) {
	for (int max = size - 1; max > 0; max--) {
		for (int index = 0; index < max; index++) {
			if (*(scoreArr + index) > *(scoreArr + (index + 1))) {
				std::swap(*(scoreArr + index), *(scoreArr + (index + 1)));
				std::swap(*(nameArr + index), *(nameArr + (index + 1)));
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

void DisplayArr(const double* scoreArr, const std::string* nameArr, const int size) {
	for (int index = 0; index < size; index++) {
		std::cout << "\nTest Score #" << index + 1 << ": " << *(nameArr + index) << " " << *(scoreArr + index) << std::endl;
	}
}
