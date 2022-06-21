//
// Created by nathh on 21/06/2022.
//

#include "Database.h"

std::unordered_map<std::string, Train> createTrainObjectMap(){
    std::fstream trainFile;
    trainFile.open("TxtFiles/Trains.txt", std::ios::in);
    if(trainFile.is_open()){
        std::string trainData;
        while(std::getline(trainFile, trainData)){
            std::cout << trainData << "\n";
        }
    }
}