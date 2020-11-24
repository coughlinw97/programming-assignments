// William Coughlin
// Calculates the area of two rectangles, using input from user, then compares them

#include <iostream>

int main()
{
    float rectangle1_width;
    float rectangle1_length;
    float rectangle2_width;
    float rectangle2_length;

    std::cout << "Please enter the width of the first rectangle: ";
    std::cin >> rectangle1_width;
    std::cout << "\nPlease enter the length of the first rectangle: ";
    std::cin >> rectangle1_length;

    float rectangle1_area = rectangle1_width * rectangle1_length;

    std::cout << "\nPlease enter the width of the second rectangle: ";
    std::cin >> rectangle2_width;
    std::cout << "\nPlease enter the length of the second rectangle: ";
    std::cin >> rectangle2_length;

    float rectangle2_area = rectangle2_width * rectangle2_length;

    std::cout << "\nYour first rectangle has an area of " << rectangle1_area << " units squared, and your second rectangle has an area of " << rectangle2_area << " units squared\n";

    if (rectangle1_area > rectangle2_area) {
        std::cout << "Your first rectangle has the greater area\n";
    }
    else if (rectangle2_area > rectangle1_area) {
        std::cout << "Your second rectangle has the greater area\n";
    }
    else if (rectangle1_area == rectangle2_area) {
        std::cout << "Both rectangles have the same area\n";
    }
}


