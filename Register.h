//
// Created by sk on 06/08/23.
//

#ifndef ACTIVITYREGISTER_REGISTER_H
#define ACTIVITYREGISTER_REGISTER_H

#include <string>
#include "Activity.h"
#include "QtWidgets"

using namespace std;

class Register{
public:
    Register() = default;
    void window(const string& title);
    string geTitle();
    string name;
};
#endif //ACTIVITYREGISTER_REGISTER_H
