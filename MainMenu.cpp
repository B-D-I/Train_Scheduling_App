//
// Created by nathh on 20/06/2022.
//

#include "MainMenu.h"


void MainMenu::displayMenu(){
    std::cout << "Train Schedule Application" << std::endl;
    std::cout << "Select Option" << std::endl;
    std::cout << "1. Schedule Train" << std::endl;
    std::cout << "2. Cancel Passenger" << std::endl;
    std::cout << "3. Check Status" << std::endl;
    std::cout << "4. Quit" << std::endl;

    int selection;
    std::cin >> selection;

    switch(selection) {
        case 1:
            schedulePassenger();
        case 2:
            std::cout << "working";
            break;
        case 3:
            std::cout << "working";
            break;
        case 4:
            std::cout << "quitting";
            displayMenu();
    }
}

void MainMenu::schedulePassenger(){

    std::string passengerName;
    int passengerAge;

    std::random_device rd; // obtain random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(1, 1000); // define range
    int passengerID = distr(gen); // assign to variable

    std::cout << "Enter Passenger Name: " << std::endl;
    std::cin >> passengerName;

    std::cout << "Enter Passenger Age:" << std::endl;
    std::cin >> passengerAge;

    if (passengerAge >= 18){
        createPassenger(passengerName, passengerAge, passengerID);
    } else {
        std::cout << "Must Be An Adult To Purchase A Ticket" << std::endl;
        std::cout << "- - - - - - - - - - - - - - - - - - -" << std::endl;
        displayMenu();
    }
}


void MainMenu::createPassenger(std::string passengerName, int passengerAge, int passengerID){
    // instantiate passenger object
    Passenger passenger;
    passenger.setName(passengerName);
    passenger.setAge(passengerAge); // this needs checking.. incorrect age !!
    passenger.setID(passengerID);

    std::cout << passenger.toString() << std::endl;
    passengerRoute(passenger);
}

void MainMenu::passengerRoute(Passenger passenger) {
    TrainDatabase trainDatabase;
    trainDatabase.createTrainObjectMap();
    std::cout << "passenger will select train info here" << std::endl;
}