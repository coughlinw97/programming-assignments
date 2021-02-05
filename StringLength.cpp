// Chapter 10, Programming Challenge 1: String Length
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

// Function prototype
int stringLength(char*);

int main()
{
	// Constant for the array size
	const int SIZE = 80;

	// An array to hold a string
	char arr[SIZE];

	// Get a string from the user.
	cout << "Enter a string of 80 characters "
		<< "or less: \n";
	cin.getline(arr, SIZE);

	// Use the stringLength function to get the 
	// length of the string. Display the length.
	int length = stringLength(arr);
	cout << "There are " << length << " characters in the string";

	return 0;
}

// ********************************************************
// The stringLength function accepts a pointer to a       *
// C-string and returns the number of characters in the   *
// string.                                                *
// ********************************************************

int stringLength(char* str)
{
	// The length of the string
	int length = 0;

	// Step through the string until the 
	// null character is found.
	char currentChar = str[0];
	
	for (int index = 0; index < 80; index++) {
			currentChar = str[index];
			if (currentChar == NULL)
				break;
			else
				length++;
	}

	// Return the length.
	return length;
}
