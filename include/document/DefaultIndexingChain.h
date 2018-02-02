//
// Created by yinchunxiang on 02/02/2018.
//

#ifndef LUCENECPP_DEFAULTINDEXINGCHAIN_H
#define LUCENECPP_DEFAULTINDEXINGCHAIN_H

#include "DocumentWriterPerThread.h"

namespace lucene {


class DefaultIndexingChain {
public:
    DefaultIndexingChain(DocumentWriterPerThread* dwpt) : documentWriterPerThread(dwpt) {

    }

    void processDocument() {
        int fieldCount = 0;
        long fieldGen = nextFieldGen++;
    }

private:
    DocumentWriterPerThread* documentWriterPerThread;
    long nextFieldGen;
};


}

#endif //LUCENECPP_DEFAULTINDEXINGCHAIN_H
