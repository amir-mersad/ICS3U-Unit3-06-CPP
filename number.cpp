// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program checks if the entered number is the same as random number

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
    // This function checks if the entered number is the same as random number
    std::string numberUser;
    int numberUserInt;
    int numberRandom;
    srand(time(0));  // seed random number generator
    numberRandom = rand() % 5 + 1;  // random number between 1 and 10
    // These 2 last codes are from cppforschool.com

    while (numberUserInt != numberRandom) {
        // Input
        std::cout << "Enter a number: " << std::endl;
        std::cin >> numberUser;
        std::cout << "" << std::endl;

        // Process and output
        try {
            numberUserInt = std::stoi(numberUser);
        } catch (std::invalid_argument) {
            std::cout << "Wrong input!!!";
            break;
        }
        if (numberUserInt == numberRandom) {
            std::cout << "You are right! " << numberRandom << std::endl;
            break;
        } else {
            std::cout << "You are wrong!" << std::endl;
        }
    }
}
