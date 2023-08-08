//
// Created by sk on 06/08/23.
//

#include "Register.h"



string Register::getName() const{
    return this->name;

}

int Register::getTimeData(Activity &a) {
    time_t t = time(0);   // get time now
    tm* now = localtime(&t);

    return now->tm_year && now->tm_mon && now->tm_mday;

}

void Register::deletActivity(Activity &a) {
    activity.push_back(a);

}

void Register::addActivity(Activity &a) {


}




