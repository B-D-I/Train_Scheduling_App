//
// Created by nathh on 21/06/2022.
//

#ifndef TRAIN_SCHEDULING_APP_TRAINSTATIONS_H
#define TRAIN_SCHEDULING_APP_TRAINSTATIONS_H

#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>

class TrainStations {
    /*
     * This class provides an adjacency list graph to store all train station routes in vertexes, along with distances
     * set for the graph edges
     */

    int V; // vertex
    std::map<std::pair<std::string,std::string>,int> station ;
    std::vector<std::string> station1;
    std::vector<std::string> station2;
public:
    TrainStations(int start_V){
        V = start_V;
    }
    void addRoute(std::string start, std::string end, int weight);
    void display();
};


#endif //TRAIN_SCHEDULING_APP_TRAINSTATIONS_H
