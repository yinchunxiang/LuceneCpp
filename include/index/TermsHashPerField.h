//
// Created by yinchunxiang on 02/02/2018.
//

#ifndef LUCENECPP_TERMSHASHPERFIELD_H
#define LUCENECPP_TERMSHASHPERFIELD_H


#include "document/FieldInfo.h"

namespace lucene {

class TermsHashPerField {
private:
    FieldInfo fieldInfo;

public:
    bool operator<(const TermsHashPerField& other) {
        return fieldInfo.getName() < other.fieldInfo.getName();
    }

};


}

#endif //LUCENECPP_TERMSHASHPERFIELD_H
