//
// Created by ariad on 8/10/2020.
//

#ifndef MY_PROJECT_NAME_ISAVEFILE_H
#define MY_PROJECT_NAME_ISAVEFILE_H
#include "PersonsVector.h"
#include<fstream>
#include<sstream>

class ISaveFile {
public:
    virtual ~ISaveFile();
    virtual void save(PersonsVector, std::string file)=0;
};


#endif //MY_PROJECT_NAME_ISAVEFILE_H
