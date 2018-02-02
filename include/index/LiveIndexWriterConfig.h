//
// Created by yinchunxiang on 02/02/2018.
//

#ifndef LUCENECPP_LIVEINDEXWRITERCONFIG_H
#define LUCENECPP_LIVEINDEXWRITERCONFIG_H

#include <document/DocumentConsumer.h>

namespace lucene {

class LiveIndexWriterConfig {
private:
    static DocumentConsumer* documentConsumer = new DocumentConsumer();

public:
    DocumentConsumer* getDocumentConsumer() {
        return documentConsumer;
    }

};



}

#endif //LUCENECPP_LIVEINDEXWRITERCONFIG_H
