//
// Created by sk on 10/08/23.
//
using namespace std;

#include <iostream>
#include "Activity.h"

void Activity::typeDescription(string d) {
    cin >> d;
    description = d;
}

string Activity::getDescription() {
        return description;
}

void Activity::printDescription() {
    cout << description << endl;
}


string Activity::getName() {
    return name;
};
