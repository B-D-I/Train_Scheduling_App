//
// Created by nathh on 21/06/2022.
//
#include "Train.h"
#include <utility>

//Train::Train(std::string trainNo, std::string departure, std::string destination, std::string departureDate) {
//    this->trainNo = std::move(trainNo);
//    this->departure = std::move(departure);
//    this->destination = destination;
//    this->departureDate = departureDate;
//    this->seatingList = seatingList;
//}

// setters for train object
void Train::setTrainNo(std::string trainNo){
    this->trainNo = trainNo;
}

void Train::setDeparture(std::string departure){
    this->departure = departure;
}

void Train::setDestination(std::string destination){
    this->destination = destination;
}

void Train::setDepartureDate(std::string departureDate){
    this->departureDate = departureDate;
}

void Train::setSeatingList(std::unordered_map<std::string, std::string> seatingList){
    this->seatingList = seatingList;
}


