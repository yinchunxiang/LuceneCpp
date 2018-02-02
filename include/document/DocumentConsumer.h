//
// Created by yinchunxiang on 02/02/2018.
//

#ifndef LUCENECPP_DOCUMENTCONSUMER_H
#define LUCENECPP_DOCUMENTCONSUMER_H

namespace lucene {


class DocumentConsumer {
public:
    DocumentConsumer() {}

    virtual void processDocument() {
        //TODO
    }
};

}

#endif //LUCENECPP_DOCUMENTCONSUMER_H
