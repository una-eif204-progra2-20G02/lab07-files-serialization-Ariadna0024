//
// Created by ariad on 8/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_ARIADNA0024_BINARYFILE_H
#define LAB07_FILES_SERIALIZATION_ARIADNA0024_BINARYFILE_H
#include "ISaveFile.h"

class BinaryFile : public ISaveFile {
public:
    void save(PersonsVector, std::string) override;
};


#endif //LAB07_FILES_SERIALIZATION_ARIADNA0024_BINARYFILE_H
