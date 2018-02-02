//
// Created by yinchunxiang on 02/02/2018.
//

#ifndef LUCENECPP_FIELDINVERTSTATE_H
#define LUCENECPP_FIELDINVERTSTATE_H

#include <string>

namespace lucene {

class FieldInvertState {
private:
    std::string name;
    int position;
    int length;
    int numOverlap;
    int offset;


public:
    const std::string& getName() {
        return name;
    }

    int getPosition() {
        return position;
    }

    int getLength() {
        return length;
    }

    int getNumOverlap() {
        return numOverlap;
    }

    int getOffset() {
        return offset;
    }

};



}

#endif //LUCENECPP_FIELDINVERTSTATE_H
