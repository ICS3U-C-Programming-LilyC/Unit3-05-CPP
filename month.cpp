// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Oct/20/2023
// This program tells the user the month based
// on the number they input from 1-12.

#include<iostream>

int main() {
    // Declaring a variable for user input.
    int userNumber;

    // Explaining my program to the user.
    std::cout << "My program will tell you what month\n";
    std::cout << "it would be based on the number inputted.\n";

        // Getting user input
        std::cout
        << "Enter a number between 1 and 12: ";
    std::cin >> userNumber;

    // Initiating switch case and
    // displaying the month to the user.
    switch (userNumber) {
        case 1 :
            std::cout << userNumber << " is the month of January.";
            break;

        case 2 :
            std::cout << userNumber << " is the month of February.";
            break;

        case 3 :
            std::cout << userNumber << " is the month of March.";
            break;

        case 4 :
            std::cout << userNumber << " is the month of April.";
            break;

        case 5 :
            std::cout << userNumber << " is the month of May.";
            break;

        case 6 :
            std::cout << userNumber << " is the month of June.";
            break;

        case 7 :
            std::cout << userNumber << " is the month of July.";
            break;

        case 8 :
            std::cout << userNumber << " is the month of August.";
            break;

        case 9 :
            std::cout << userNumber << " is the month of September.";
            break;

        case 10 :
            std::cout << userNumber << " is the month of October.";
            break;

        case 11 :
            std::cout << userNumber << " is the month of November.";
            break;

        case 12 :
            std::cout << userNumber << " is the month of December.";
            break;

    default :
            std::cout <<
            "Invalid number.Please enter a number between 1 and 12.";
    }
}
