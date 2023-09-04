//
// Created by sk on 06/08/23.
//

#include <iostream>
#include "Register.h"



bool Register::window(const string& title) {
    name = title;
    cout << title << endl;
    return true;
}

string Register::geTitle() {
    return name;
}


