//
// Created by yinchunxiang on 01/02/2018.
//

#ifndef LUCENECPP_DOCUMENTWRITER_H
#define LUCENECPP_DOCUMENTWRITER_H

#include <directory/Directory.h>
#include <index/IndexWriterConfig.h>
#include "index/Term.h"

namespace lucene {

class IndexWriter;

class DocumentWriter {
public:
    DocumentWriter(IndexWriter* indexWriter, IndexWriterConfig* config, Directory* directory)
            : index_writer_(indexWriter), index_writer_config_(config), directory_(directory){

        std::cout << "DocumentWriter constructed" << std::endl;

    }

    void UpdateDocument(Document* doc, StandardAnalyzer* analyzer, Term* del_term) {
        //TODO:
        return;
    }

private:
    IndexWriter* index_writer_;
    IndexWriterConfig* index_writer_config_;
    Directory* directory_;
};

}

#endif //LUCENECPP_DOCUMENTWRITER_H
