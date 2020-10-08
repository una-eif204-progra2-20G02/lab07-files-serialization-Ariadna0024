//
// Created by ariad on 8/10/2020.
//

#include "SavePersonJSon.h"
#include <fstream>
using namespace std;

json SavePersonJSon::serializePerson(int position, PersonsVector persons) {
    json jsonPersona;
    Person* aux = persons.getPerson(position);
    jsonPersona["Name"] = aux->getName();
    jsonPersona["Id"] = aux->getId();
    jsonPersona["Age"] = aux->getAge();


    return jsonPersona;
}

void SavePersonJSon::save(PersonsVector persons, std::string fileName)
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



SavePersonJSon::~SavePersonJSon() = default;