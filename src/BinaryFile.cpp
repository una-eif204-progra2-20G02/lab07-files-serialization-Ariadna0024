//
// Created by ariad on 8/10/2020.
//

#include "BinaryFile.h"

void BinaryFile::save(PersonsVector persons, std::string file) {
ofstream _file;
    try{
    _file.open(file, ios::app | ios::binary);
    }
    catch(std::ifstream::failure a){
        exit(1);
    }
     for(int i=0; i<persons.size(); i++){
        auto person= persons.getPerson(i);
        _file.write((char *) &person, sizeof(Person));
    }
  _file.close();
}
