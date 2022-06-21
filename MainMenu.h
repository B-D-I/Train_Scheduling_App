//
// Created by nathh on 20/06/2022.
//
#ifndef TRAIN_SCHEDULING_APP_MAINMENU_H
#define TRAIN_SCHEDULING_APP_MAINMENU_H

#include "random"
#include "Passenger.h"
#include "Database.h"

class MainMenu{

public:

    void displayMenu();

    void schedulePassenger();

    void createPassenger(std::string passengerName, int passengerAge, int passengerID);

private:

    void passengerRoute(Passenger passenger);

};

#endif //TRAIN_SCHEDULING_APP_MAINMENU_H
