//
// Created by yinchunxiang on 01/02/2018.
//

#ifndef PROJECT_STANDARDANALYZER_H
#define PROJECT_STANDARDANALYZER_H

#include <iostream>

namespace lucene {

class StandardAnalyzer {
public:
    StandardAnalyzer() {
        std::cout << "StandardAnalyzer constructed" << std::endl;
    }
};


}

#endif //PROJECT_STANDARDANALYZER_H
