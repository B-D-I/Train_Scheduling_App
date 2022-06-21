//
// Created by nathh on 20/06/2022.
//

#ifndef TRAIN_SCHEDULING_APP_PASSENGER_H
#define TRAIN_SCHEDULING_APP_PASSENGER_H
#include <iostream>

class Passenger {

private:
    std::string name;
    int id;
    int age;

public:
    Passenger();

    void setName(std::string name){
        this->name = name;
    }
    std::string getName(){
        return name;
    }

    void setID(int id){
        this->id = id;
    }
    int getID(){
        return id;
    }

    void setAge(int age){
        this->id = id;
    }
    int getAge(){
        return age;
    }

    std::string toString();
};


#endif //TRAIN_SCHEDULING_APP_PASSENGER_H
