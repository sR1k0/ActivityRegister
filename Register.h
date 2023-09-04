//
// Created by sk on 06/08/23.
//

#ifndef ACTIVITYREGISTER_REGISTER_H
#define ACTIVITYREGISTER_REGISTER_H

#include <string>
#include "Activity.h"

using namespace std;

class Register{
public:
    explicit Register(string n) : name(n) {};
    bool window(const string &title);
    string geTitle();
    ~Register() = default;
private:
    string name;
};
#endif //ACTIVITYREGISTER_REGISTER_H
