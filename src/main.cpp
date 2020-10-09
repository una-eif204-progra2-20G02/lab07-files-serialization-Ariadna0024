//
// Created by ariad on 8/10/2020.
//
#include "JSonFile.h"
#include "FileManager.h"
#include "PersonsVector.h"
#include "ISaveFile.h"
#include "BinaryFile.h"
#include <iostream>

int main(){
    PersonsVector persons;
    FileManager _fileManager;

    ISaveFile* json = new JSonFile();
    ISaveFile* binary= new BinaryFile();


    persons.addPerson(new Person("Ariadna", 12726464, 20));
    persons.addPerson(new Person("Andrea", 11028393, 25));



    FileManager::serialize(json, persons, "JSonPersonsFile.txt");
    FileManager::serialize(binary, persons, "BinaryPersonsFile.txt");


    std::cout<< persons.toString();

}
