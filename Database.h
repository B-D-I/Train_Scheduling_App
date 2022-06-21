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
    std::unordered_map<std::string, Train> createTrainObjectMap();

    TrainDatabase(){createTrainObjectMap();}

};

#endif //TRAIN_SCHEDULING_APP_DATABASE_H
