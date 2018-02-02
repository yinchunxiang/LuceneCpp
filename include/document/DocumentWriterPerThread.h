//
// Created by yinchunxiang on 02/02/2018.
//

#ifndef LUCENECPP_DOCUMENTWRITERPERTHREAD_H
#define LUCENECPP_DOCUMENTWRITERPERTHREAD_H

#include <analysis/StandardAnalyzer.h>
#include <index/IndexWriter.h>
#include <index/LiveIndexWriterConfig.h>
#include "index/Term.h"
#include "Document.h"
#include "DocumentConsumer.h"

namespace lucene {

class DocumentWriterPerThread {
public:
    DocumentWriterPerThread(LiveIndexWriterConfig* liveIndexWriterConfig) {
        consumer = liveIndexWriterConfig->getDocumentConsumer();

    }

    long UpdateDocument(Document* doc, StandardAnalyzer* analyzer, Term* term) {
        consumer->processDocument();


    }

private:
    IndexWriter* index_writer_;
    Directory* directory_;
    LiveIndexWriterConfig* live_index_writer_config_;

    DocumentConsumer *consumer;
    long numDocsInRAM_;
    long pendingNumDocs;
};

}

#endif //LUCENECPP_DOCUMENTWRITERPERTHREAD_H
