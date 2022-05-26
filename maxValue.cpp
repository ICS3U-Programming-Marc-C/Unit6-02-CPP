// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: May 2022
// This program generates 10 random
// numbers and display the greatest


#include <time.h>
#include <iostream>
#include <random>
#include <array>
using std::string;


// Declaring constants
const int MAX_ARRAY_SIZE = 10;
const int MIN_NUM = 0;
const int MAX_NUM = 100;


// Defining the function that returns the max value

int MaxNumber(std::array<int, 10> someArray) {
       int counter, maxVal;
       maxVal = someArray[0];


       for (counter = 1; counter < 10; counter++) {
              if (maxVal < someArray[counter]) {
                     maxVal = someArray[counter];
              }
       }
       return maxVal;
}

// Defining the main function
int main() {
       // Defining the variables
       std::array<int, 10> arrayOfInt;
       int totalSum = 0;
       int  maxNum = 0;
       int someRandomNumber;
       int counter;
       int counter2;
       srand(time(NULL));
       // First for loop to generate random numbers
       for (counter = 0; counter < 10; counter++) {
              someRandomNumber = (rand() % 100 + 1) + MIN_NUM;
              arrayOfInt[counter] = someRandomNumber;
              std::cout << someRandomNumber << " added to array at index ";
              std::cout << counter << "\n";
       }

       // Calculating average
       maxNum = MaxNumber(arrayOfInt);

       std::cout << "\nThe max number is " << maxNum;
}
