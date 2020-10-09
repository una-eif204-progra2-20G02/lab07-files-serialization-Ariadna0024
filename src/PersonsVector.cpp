//
// Created by ariad on 8/10/2020.
//

#include "PersonsVector.h"
PersonsVector::PersonsVector() {}

int PersonsVector::size() {
    return persons.size();
}

Person* PersonsVector::getPerson(int position) {
    return persons[position];
}

void PersonsVector::addPerson(Person * person1){
    persons.emplace_back(person1);
}

string PersonsVector::toString(){
    ostringstream output;
    for(auto & Person : persons)
        output<<Person->toString() << endl;
    return output.str();
}

PersonsVector::~PersonsVector(){
    persons.clear();
}

