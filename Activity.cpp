//
// Created by sk on 10/08/23.
//
using namespace std;
#include <iostream>
#include "Activity.h"

int Activity::typeDescription(string d) {
    cout << "Write activity description: " << endl;
    cin >> d;
    description = d;
    return description.size();
}

string Activity::getDescription() {
        return description;
}

void Activity::printDescription(){
        cout << description;
}


string Activity::getName() {
    return name;
};
