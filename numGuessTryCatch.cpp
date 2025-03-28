// Copyright (c) 2025 Angel rights reserved.
// Created by: Angel
// Created on: March27,2025
// This program uses a try statement

#include <iostream>
#include <string>

main() {
    //  this function uses a try statement
    std::string integerAsString;
    int integerAsNumber;

    // get the number from user
    std::cout << "Enter a number: ";  // Enter the number
    std::cin >> integerAsString;  // change the number entered
    // from string to integer

    // Enter the number
    try {
        integerAsNumber = std::stoi(integerAsString);
        std::cout << "That number as an integer is " << integerAsNumber;
        // Say that it was a correct integer
    } catch (std::invalid_argument) {  // if it is not then
        std::cout << "That was not an integer";  // # Say that it is not
    }
}
