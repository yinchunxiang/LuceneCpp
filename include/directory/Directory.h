//
// Created by yinchunxiang on 01/02/2018.
//

#ifndef PROJECT_DIRECTORY_H
#define PROJECT_DIRECTORY_H


#include <iostream>

namespace lucene {

class Directory {
public:
    Directory() {
        std::cout << "Directory constructed" << std::endl;
    }
};

}

#endif //PROJECT_DIRECTORY_H
