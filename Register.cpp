//
// Created by sk on 06/08/23.
//

#include <iostream>
#include "Register.h"


void Register::window(const string& title) {
    name = title;
    cout << title << endl;
}

string Register::geTitle() {
    return name;
}
