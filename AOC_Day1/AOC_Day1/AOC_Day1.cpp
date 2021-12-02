// AOC_Day1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>

/*
count the number of times a depth measurement increases from the previous measurement.
(There is no measurement before the first measurement.)
*/

int main()
{
    std::ifstream in_file;
    in_file.open("num.txt");

    int num{}, ans{0};
    std::vector<int> numbers{};

    while (in_file >> num) {
        numbers.push_back(num);
    }
    int size = numbers.size();

    for (int i{ 0 }; i < size; i++) {

        if (i == 0) {
            continue;
        }
        if (numbers.at(i) > numbers.at(i - 1)) {
            ans++;
        }
    }
    std::cout << "Answer is: " << ans << std::endl;
    in_file.close();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
