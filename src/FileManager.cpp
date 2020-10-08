//
// Created by ariad on 8/10/2020.
//

#include "FileManager.h"

void FileManager::serialize(ISaveFile *serialize, const PersonsVector& persons, std::string file) {
     serialize->save(persons,std::move(file));
}