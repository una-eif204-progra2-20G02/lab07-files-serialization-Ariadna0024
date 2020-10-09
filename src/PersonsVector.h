//
// Created by ariad on 8/10/2020.
//

#ifndef MY_PROJECT_NAME_PEOPLEVECTOR_H
#define MY_PROJECT_NAME_PEOPLEVECTOR_H
#include "Person.h"
#include<vector>

class PersonsVector {
private:
    vector<Person*> persons;
public:
    PersonsVector();
    ~PersonsVector();
    Person* getPerson(int position);
    int size();
    void addPerson(Person*);
    string toString();

};


#endif //MY_PROJECT_NAME_PEOPLEVECTOR_H
