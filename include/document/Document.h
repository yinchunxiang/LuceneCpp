//
// Created by yinchunxiang on 01/02/2018.
//

#ifndef LUCENECPP_DOCUMENT_H
#define LUCENECPP_DOCUMENT_H

#include <iostream>
#include <vector>
#include "TextField.h"

namespace lucene {

class Document {
public:
    Document() {
        std::cout << "Document constructed" << std::endl;
    }

    void add(TextField* textField) {
        fields_.push_back(textField);
    }

private:
    std::vector<TextField*> fields_;

};

}

#endif //LUCENECPP_DOCUMENT_H
