//
// Created by yinchunxiang on 02/02/2018.
//

#ifndef LUCENECPP_FIELDINFO_H
#define LUCENECPP_FIELDINFO_H


#include <string>
#include "DocValuesType.h"

namespace lucene {

class FieldInfo {
public:
    const std::string& getName() {
        return name;
    }

    int getNumber() {
        return number;
    }

private:
    std::string name;
    int number;
    DocValuesType docValuesType = DocValuesType::NONE;


};

}

#endif //LUCENECPP_FIELDINFO_H
