//
// Created by sk on 06/08/23.
//

#ifndef ACTIVITYREGISTER_REGISTER_H
#define ACTIVITYREGISTER_REGISTER_H

#include <string>
#include <list>
#include <ctime>
#include "Activity.h"

using namespace std;

class Register{
public:
    Register(string n) : name(n) {}
    void addActivity(Activity& a);
    void deletActivity(Activity& a);
    int getTimeData(Activity& a);
    string getName() const;
    void clickElement();
    int getActivityClicked();

private:
    string name;
    int data;
    list<Activity> activity;

};
#endif //ACTIVITYREGISTER_REGISTER_H
