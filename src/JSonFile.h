//
// Created by ariad on 8/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_ARIADNA0024_JSONFILE_H
#define LAB07_FILES_SERIALIZATION_ARIADNA0024_JSONFILE_H
#include <../lib/nlohmann/json.hpp>
#include "ISaveFile.h"
#include"PersonsVector.h"
#include<ostream>

using json = nlohmann::json;

class JSonFile : public ISaveFile{

public:
    void save(PersonsVector, std::string) override;

    static json serializePerson(int position, PersonsVector);

    ~JSonFile() override;
};

#endif //LAB07_FILES_SERIALIZATION_ARIADNA0024_JSONFILE_H
