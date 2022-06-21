//
// Created by nathh on 21/06/2022.
//

#ifndef TRAIN_SCHEDULING_APP_DATABASE_H
#define TRAIN_SCHEDULING_APP_DATABASE_H
#include <iostream>
#include <fstream>
#include <unordered_map>
#include "Train.h"


class Database {

};

class TrainDatabase: public Database {

public:
    // method to retrieve all train stations from txt file and store in hashmap
    std::unordered_map<std::string, Train> createTrainObjectMap();

    // ensure the station data is retrieved upon instantiation
    TrainDatabase(){createTrainObjectMap();}

    void trainStatus();

};

#endif //TRAIN_SCHEDULING_APP_DATABASE_H
