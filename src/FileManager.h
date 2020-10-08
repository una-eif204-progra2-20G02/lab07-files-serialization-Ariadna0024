//
// Created by ariad on 8/10/2020.
//

#ifndef MY_PROJECT_NAME_FILEMANAGER_H
#define MY_PROJECT_NAME_FILEMANAGER_H
#include "PersonsVector.h"
#include"ISaveFile.h"

class FileManager {
public:
    static void serialize(ISaveFile*, const PersonsVector&, string);
};


#endif //MY_PROJECT_NAME_FILEMANAGER_H
