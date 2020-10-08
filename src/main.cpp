//
// Created by ariad on 8/10/2020.
//
#include "SavePersonJSon.h"
#include "FileManager.h"
#include "PersonsVector.h"
#include "ISaveFile.h"
#include <iostream>

int main(){
    PersonsVector persons;
    FileManager _fileManager;


    persons.addPerson(new Person("Ariadna", 12726464, 20));
    persons.addPerson(new Person("Andrea", 11028393, 25));

    ISaveFile* save = new SavePersonJSon();

    FileManager::serialize(save, persons, "JSonPersonsFile.txt");


    std::cout<< persons.toString();

}
