// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: March. 28, 2022
//  This program asks the user for a number
// then check if they entered a negative, positive
// or 0 and display them the answer.


#include <iostream>
#include <cmath>



int main() {
  // ask user for a number
  std::cout << "Enter a number ";
  int the_number;
  std::cin >> the_number;
  // check if what type if number they entered
  // and tell them
  if (the_number > 0) {
      std::cout << the_number << " is a positive number" << std::endl;

  } else if (the_number < 0) {
      std::cout << the_number << " is a negative number" << std::endl;
  } else if (the_number == 0) {
      std::cout << the_number << " is just a 0" << std::endl;
  }
  }
