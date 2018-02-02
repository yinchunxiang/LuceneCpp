//
// Created by yinchunxiang on 02/02/2018.
//

#ifndef LUCENECPP_TERMVECTORSWRITER_H
#define LUCENECPP_TERMVECTORSWRITER_H


namespace lucene {


class TermVectorsWriter {

protected:
    TermVectorsWriter() {}

public:
    virtual void startDocument(int numVectorFields) = 0;
    virtual void finishDocument() = 0;


};


}

#endif //LUCENECPP_TERMVECTORSWRITER_H
