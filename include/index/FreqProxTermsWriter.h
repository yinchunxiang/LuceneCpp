//
// Created by yinchunxiang on 02/02/2018.
//

#ifndef LUCENECPP_FREQPROXTERMSWRITER_H
#define LUCENECPP_FREQPROXTERMSWRITER_H

#include "TermsHash.h"

namespace lucene {

class FreqProxTermsWriter : public TermsHash {

public:
    FreqProxTermsWriter(DocumentWriterPerThread* documentWriterPerThread, TermsHash* termVectors)
            : TermsHash(documentWriterPerThread, termVectors){

    }

    TermsHashPerField addField(FieldInvertState* invertState, FieldInfo* fieldInfo) {

    }
};

}

#endif //LUCENECPP_FREQPROXTERMSWRITER_H
