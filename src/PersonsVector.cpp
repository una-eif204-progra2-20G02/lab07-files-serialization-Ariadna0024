//
// Created by ariad on 8/10/2020.
//

#include "PersonsVector.h"

int PersonsVector::size() {
    return Persons.size();
}

Person* PersonsVector::getPerson(int position) {
    return Persons[position];
}

void PersonsVector::addPerson(Person * person1){
    Persons.emplace_back(person1);
}

string PersonsVector::toString(){
    ostringstream output;
    for(auto & Person : Persons)
        output<<Person->toString() << endl;
    return output.str();
}

PersonsVector::PersonsVector(){
    Persons.clear();
}

