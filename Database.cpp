//
// Created by nathh on 21/06/2022.
//

#include <vector>
#include "Database.h"

// return all .txt train object data into hashmap, with key: train number / value: train object
std::unordered_map<std::string, Train> TrainDatabase::createTrainObjectMap(){

    std::unordered_map<std::string, Train> allTrainsMap;

    std::fstream trainFile;

    std::string trainNo;
    std::string departureStation;
    std::string departureDate;
    std::string destinationStation;
    std::string seatingList;
    // read train data and place into variables
    trainFile.open("Trains.txt", std::ios::in);
    if(trainFile.is_open()){
        while(std::getline(trainFile, trainNo)){
            std::getline(trainFile, departureStation);
            std::getline(trainFile, departureDate);
            std::getline(trainFile, destinationStation);
            std::getline(trainFile, seatingList);
            trainFile.close();
        }
// instantiate train object from .txt data
    Train train;
    train.setTrainNo(trainNo);
    train.setDeparture(departureStation);
    train.setDepartureDate(departureDate);
    train.setDestination(destinationStation);
    // need to convert string to hashmap first.
//    train.setSeatingList();

// insert train objects into hashmap, with train number as key
    allTrainsMap.insert(std::make_pair(trainNo, train));
        for(const auto & it : allTrainsMap){
            std::cout << it.first << " " << std::endl;
        }
    } return allTrainsMap;
}

void TrainDatabase::trainStatus() {
    // create hashmap containing trains.txt, train objects
    std::unordered_map<std::string, Train> trainMap = createTrainObjectMap();
    std::unordered_map<std::string, Train>::iterator it;


    std::string trainNo;
    std::cout << "Enter Train Number: " << std::endl;
    std::cin >> trainNo;

    for(auto it = trainMap.cbegin();  it != trainMap.cend(); ++it){
        std::cout << it->first << " " << std::endl;
    }

//    it = trainMap.find(trainNo);
//    if (it != trainMap.end()){
//        trainMap.erase(it);
//    }
//    std::cout << trainMap.find(trainNo)->first << std::endl;

//    std::unordered_map<std::string, Train>::iterator it = trainMap.begin();

//    for(auto& it: trainMap){
//        if(it.first == trainNo){
//            std::cout << "found: " << it.first;
//        } else {
//            std::cout << "not found" << std::endl;
//        }
//    }
}