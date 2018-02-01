//
// Created by yinchunxiang on 01/02/2018.
//

#ifndef LUCENECPP_INDEXWRITER_H
#define LUCENECPP_INDEXWRITER_H


#include <iostream>
#include <directory/Directory.h>
#include <document/Document.h>
#include <document/DocumentWriter.h>
#include <document/Term.h>

namespace lucene {

class IndexWriter {
public:
    IndexWriter(Directory* directory, IndexWriterConfig* config)
            : directory_(directory), config_(config){
        std::cout << "IndexWriter constructed" << std::endl;

        document_writer_ = new DocumentWriter(this, config_, directory_);
        analyzer_ = config_->analyzer();
    }

    void AddDocument(Document* doc) {
        UpdateDocument(nullptr, doc);
    }

    void UpdateDocument(Term* term, Document* doc) {
        document_writer_->UpdateDocument(doc, analyzer_, term);
    }

    void close() {
        //TODO
    }

private:
    DocumentWriter* document_writer_;
    Directory* directory_;
    IndexWriterConfig* config_;
    StandardAnalyzer* analyzer_;
};

}

#endif //LUCENECPP_INDEXWRITER_H
