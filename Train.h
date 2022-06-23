//
// Created by nathh on 21/06/2022.
//

#ifndef TRAIN_SCHEDULING_APP_TRAIN_H
#define TRAIN_SCHEDULING_APP_TRAIN_H
#include <iostream>
#include <unordered_map>

class Train {
private:
    std::string trainNo;
    std::string departure;
    std::string destination;
    std::string departureDate;
    std::unordered_map<std::string, std::string> seatingList;

public:
//    Train(std::string trainNo, std::string departure, std::string destination, std::string departureDate);

// setters and getters for train object
    void setTrainNo(std::string trainNo);
    std::string getTrainNo(){
        return trainNo;
    }

    void setDeparture(std::string departure);
    std::string getDeparture(){
        return departure;
    }

    void setDestination(std::string destination);
    std::string getDestination(){
        return destination;
    }

    void setDepartureDate(std::string departureDate);
    std::string getDepartureDate(){
        return departureDate;
    }

    void setSeatingList(std::unordered_map<std::string, std::string> seatingList);
    std::unordered_map<std::string, std::string> getSeatingList(){
        return seatingList;
    }
};


#endif //TRAIN_SCHEDULING_APP_TRAIN_H
