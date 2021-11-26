// advent_of_code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>

/*

Specifically, they need you to find the two entries that sum to 2020 and then multiply those two numbers together.
*/



int main()
{
    std::ifstream in_file;
    in_file.open("num.txt");
    std::cout << "Welcome to Advent of Code Demo for 2020, Day 1\nSpecifically, they need you to find the two entries that sum to 2020 and then multiply those two numbers together.\n";
    int num{};
    std::vector<int> nums;

    while (in_file >> num) {
        nums.push_back(num);
    }
    in_file.close();

    for (int i{ 0 }; i < nums.size(); i++) {
        for (int j{ 1 };j < nums.size()-1;j++) {
            if (nums.at(i) + nums.at(j) == 2020) {
                std::cout << nums.at(i) << " + " << nums.at(j) << " = " << 2020 << "\n";
                std::cout << nums.at(i) << " * " << nums.at(j) << " = " << nums.at(i) * nums.at(j)<< "\n";
            }
        }
    }

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
