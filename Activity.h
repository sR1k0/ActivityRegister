//
// Created by sk on 02/08/23.
//

#ifndef JOURNAL_ACTIVITY_H
#define JOURNAL_ACTIVITY_H
#include <string>
using namespace std;


class Activity {
public:
    explicit Activity(string n) : name(n){}
    int typeDescription(char d[]);
    string getDescription();
    void printDescription(int i = 0);

    string getName();
    ~Activity() = default;


private:
    int maxCarachter = 249;
    string name;
    char description[];
};


#endif //JOURNAL_ACTIVITY_H
