// TestAverage_Coughlin.cpp
// William Coughlin
// Program takes five test scores then averages them and displays the result

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Welcome to the test averaging program!\n";
    std::cout << "Please enter the results of five tests...\n";

    float test_1, test_2, test_3, test_4, test_5;

    std::cin >> test_1 >> test_2 >> test_3 >> test_4 >> test_5;

    float average = (test_1 + test_2 + test_3 + test_4 + test_5) / 5;

    std::cout << "Your test average is: " << std::setprecision(1) << std::fixed << average << std::endl;

    return 0;
}


