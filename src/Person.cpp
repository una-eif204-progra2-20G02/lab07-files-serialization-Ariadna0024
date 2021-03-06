//
// Created by ariad on 8/10/2020.
//

#include "Person.h"

Person::Person(const string &name, int id, int age) : name(name), id(id), age(age) {

}
Person::~Person() = default;

Person::Person() = default;

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getId() const {
    return id;
}

void Person::setId(int id) {
    Person::id = id;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}



string Person::toString() const {
    ostringstream output;

    output<<"Name: " << getName() <<
          "\nId: " << getId() <<
          "\nAge: " << getAge();

    return output.str();
}



