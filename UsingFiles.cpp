#include <iostream>
#include <fstream>

std::ifstream inputFile;

int number;
int numbersCount = 0;
double sum = 0;
double average = 0;

int main() {
	inputFile.open("random.txt");

	while (inputFile >> number) {
		numbersCount++;
		sum += number;
	}

	average = (sum / numbersCount);

	std::cout << "There are " << numbersCount << " numbers in the file\n";
	std::cout << "Sum is " << sum << std::endl;
	std::cout << "Average is " << average << std::endl;
}