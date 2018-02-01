//
// Created by yinchunxiang on 01/02/2018.
//

#ifndef PROJECT_RAMDIRECTORY_H
#define PROJECT_RAMDIRECTORY_H

#include "directory/Directory.h"

namespace lucene {

class RAMDirectory : public Directory {
public:
    RAMDirectory() : Directory() {
        std::cout << "RAMDirectory constructed" << std::endl;
    }
};


}

#endif //PROJECT_RAMDIRECTORY_H
