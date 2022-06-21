//
// Created by nathh on 20/06/2022.
//
#include <sstream>
#include "Passenger.h"

Passenger::Passenger() {}

std::string Passenger::toString(){
    std::stringstream ss;
    ss << "Name: ";
    ss << name << std::endl;
    ss << "Age: ";
    ss << age << std::endl;
    ss << "ID: ";
    ss << id << std::endl;
    return ss.str();
}
