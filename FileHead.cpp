// William Coughlin
// Opens file defined by user and reads first ten lines

#include <iostream>
#include <fstream>
#include <string>

bool OpenFile(std::ifstream &, std::string);
void ReadFirstTen(std::ifstream &);

int main() {
	std::ifstream file;
	std::string fileName;

	std::cout << "Enter name of file: ";
	std::cin >> fileName;

	if (OpenFile(file, fileName))
		ReadFirstTen(file);
}

bool OpenFile(std::ifstream &file, std::string fileName) {
	file.open(fileName);

	if (file.fail()) {
		std::cout << "\nError: Unable to open file\n";
		return false;
	}
	else {
		std::cout << "\nFile opened successfully.\n";
		return true;
	}
}

void ReadFirstTen(std::ifstream &file) {
	std::string line;

	std::cout << "\nDisplaying file contents:\n";

	for (int index = 0; index < 10; index++) {
		while (file >> line)
		{
			std::cout << line << std::endl;

			if (file.eof()) {
				std::cout << "\nEntire file has been displayed.\n";
				break;
			}
		}
	}
}