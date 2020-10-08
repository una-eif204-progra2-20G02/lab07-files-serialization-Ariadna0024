//
// Created by ariad on 8/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_ARIADNA0024_PERSON_H
#define LAB07_FILES_SERIALIZATION_ARIADNA0024_PERSON_H

#include <iostream>
#include <sstream>
using namespace std;

class Person {
private:
    string name;
    int id;
    int age;

public:
    Person(const string &name, int id, int age);

    const string &getName() const;
    void setName(const string &name);
    virtual ~Person();
    int getId() const;
    void setId(int id);
    int getAge() const;
    void setAge(int age);
    string toString() const;


};


#endif //LAB07_FILES_SERIALIZATION_ARIADNA0024_PERSON_H
