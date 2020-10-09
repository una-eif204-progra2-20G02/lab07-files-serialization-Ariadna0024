//
// Created by ariad on 8/10/2020.
//

#include "JSonFile.h"
#include <fstream>
using namespace std;

json JSonFile::serializePerson(int position, PersonsVector persons) {
    json person;
    Person* aux = persons.getPerson(position);
    person["Name"] = aux->getName();
    person["Id"] = aux->getId();
    person["Age"] = aux->getAge();


    return person;
}

void JSonFile::save(PersonsVector persons, std::string fileName)
{
    vector<json> serializeVector;

    serializeVector.reserve(persons.size());
    for (int i = 0; i < persons.size(); i++) {
        serializeVector.emplace_back(serializePerson(i, persons));
    }
    ofstream file;

    try { file.open(fileName, ios::binary); }
    catch (ifstream::failure a) {
        exit(1);
    }
    file << serializeVector;
    file.close();
}



JSonFile::~JSonFile() = default;