//
// Created by yinchunxiang on 02/02/2018.
//

#ifndef LUCENECPP_TERMVECTORSCONSUMER_H
#define LUCENECPP_TERMVECTORSCONSUMER_H

#include "TermsHash.h"

namespace lucene {

class TermVectorsConsumer : public TermsHash{
private:
//    TermVectorsWriter* termVectorsWriter;
    DocumentWriterPerThread* documentWriterPerThread;


public:
    TermVectorsConsumer(DocumentWriterPerThread* dwpt)
            : TermsHash(documentWriterPerThread, nullptr), documentWriterPerThread(dwpt) {
    }

};


}

#endif //LUCENECPP_TERMVECTORSCONSUMER_H
