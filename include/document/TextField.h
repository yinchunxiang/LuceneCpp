//
// Created by yinchunxiang on 01/02/2018.
//

#ifndef LUCENECPP_TEXTFIELD_H
#define LUCENECPP_TEXTFIELD_H

#include <string>
#include <iostream>

namespace lucene {

class TextField {
public:
    static const int TYPE_STORED = 1;

    TextField(const std::string& fieldName, const std::string& fieldValue, int type)
            : fieldName_(fieldName), fieldValue_(fieldValue), type_(type){

        std::cout << "TextField constructed" << std::endl;

    }
private:
    int type_;
    std::string fieldName_;
    std::string fieldValue_;
};

}

#endif //LUCENECPP_TEXTFIELD_H
