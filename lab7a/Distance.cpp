#include "Distance.h"
#include <iostream>

Distance::Distance() {
    feet = 0;
    inches = 0;
}

Distance::Distance(int ft, float in) {
    feet = ft;
    inches = in;
}

void Distance::inputDistance() {
    std::cout << "Enter feet: ";
    std::cin >> feet;
    std::cout << "Enter inches: ";
    std::cin >> inches;
}

void Distance::printDistance() {
    std::cout << "Distance: " << feet << " feet " << inches << " inches" << std::endl;
}

Distance::~Distance() {
    std::cout << "Distance deleted: " << feet << " feet " << inches << " inches" << std::endl;
}