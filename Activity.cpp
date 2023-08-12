//
// Created by sk on 10/08/23.
//
using namespace std;
#include <iostream>
#include "Activity.h"

int Activity::typeDescription(char d[]) {
    int i, totChar = 0;
    cout << "When finish the description press bar space to complete." << endl;
    cout << "Write activity description: " << endl;
    for(i = 0; i < maxCarachter, d[i] != ' '; i++){
        description[i] = d[i];
        totChar++;
        if(i == maxCarachter){
            cerr << "maximum content reached" << endl;
        }
    }
    return totChar;
}

string Activity::getDescription() {
        return description;
}

void Activity::printDescription(int i){
    while(description != "." | description != "" | i != maxCarachter){
        cout << description[i];
        i--;
    }
}


string Activity::getName() {
    return name;
};
