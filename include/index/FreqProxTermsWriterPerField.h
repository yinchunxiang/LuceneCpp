//
// Created by yinchunxiang on 02/02/2018.
//

#ifndef LUCENECPP_FREQPROXTERMSWRITERPERFIELD_H
#define LUCENECPP_FREQPROXTERMSWRITERPERFIELD_H

#include "TermsHashPerField.h"

namespace lucene {

class FreqProxTermsWriterPerField : public TermsHashPerField {
    bool hasFreq;
    bool hasProx;
    bool hasOffsets;
};

}

#endif //LUCENECPP_FREQPROXTERMSWRITERPERFIELD_H
