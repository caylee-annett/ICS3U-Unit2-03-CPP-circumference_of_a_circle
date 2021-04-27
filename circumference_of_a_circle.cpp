// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on April 2021
// This program calculates the circumference of a circle using tau
//    and dimensions that the user entered

#include <iostream>

int main() {
    // This function calculates the circumference
    const double TAU = 6.283185307;
    int radiusOfCircle;
    double circumference;

    // Input
    std::cout << "Enter the radius of the circle (cm): ";
    std::cin >> radiusOfCircle;

    // Process
    circumference = radiusOfCircle*TAU;

    // Output
    std::cout << "" << std::endl;
    std::cout << "The circumference of a circle with a radius of "
    << radiusOfCircle << " cm is: " << circumference << " cm." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
