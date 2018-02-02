//
// Created by yinchunxiang on 02/02/2018.
//

#ifndef LUCENECPP_TERMSHASH_H
#define LUCENECPP_TERMSHASH_H

#include "document/DocumentWriterPerThread.h"
#include "document/FieldInfo.h"
#include "TermsHashPerField.h"
#include "FieldInvertState.h"

namespace lucene {

class TermsHash{
    TermsHash* nextTermsHash;

public:
    TermsHash(DocumentWriterPerThread* dwpt, TermsHash* next) : nextTermsHash(next){
    }

    virtual TermsHashPerField addField(
            FieldInvertState* fieldInvertState, FieldInfo* fieldInfo
    );

};

}

#endif //LUCENECPP_TERMSHASH_H
