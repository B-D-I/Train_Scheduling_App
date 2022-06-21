//
// Created by nathh on 21/06/2022.
//

#include "TrainStations.h"
/*
   * This class provides an adjacency list graph to store all train station routes in vertexes, along with distances
   * set for the graph edges
   */

void TrainStations::addRoute(std::string start, std::string end, int weight) {
    station[make_pair(start, end)] = weight;
}
void TrainStations::display() {
    int flag=0;
    for(auto it:station){
        station1.push_back(it.first.first);
        station2.push_back(it.first.second);
    }
    sort(station1.begin(), station1.end());
    auto last = unique(station1.begin(), station1.end());
    station1.erase(last, station1.end());

    sort(station2.begin(), station2.end());
    auto last2 = unique(station2.begin(), station2.end());
    station2.erase(last, station2.end());

//    for(auto row:station){
//        int flag=0;
//        for(auto col:station2){
//            if (!=flag)
//                std::cout<<row;
//            std::cout<<"\t"<<station[make_pair(row,col)];
//            flag = 1;
//        }
//    }
}