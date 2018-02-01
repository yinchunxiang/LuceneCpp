//
// Created by yinchunxiang on 01/02/2018.
//

#ifndef LUCENECPP_INDEXWRITERCONFIG_H
#define LUCENECPP_INDEXWRITERCONFIG_H

#include <analysis/StandardAnalyzer.h>

namespace lucene {

class IndexWriterConfig {
public:
    IndexWriterConfig(StandardAnalyzer* analyzer) : analyzer_(analyzer) {
        std::cout << "IndexWriterConfig constructed" << std::endl;
    }

    StandardAnalyzer* analyzer() {
        return analyzer_;
    }

private:
    StandardAnalyzer* analyzer_;
};


}

#endif //LUCENECPP_INDEXWRITERCONFIG_H
