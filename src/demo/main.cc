//
// Created by yinchunxiang on 01/02/2018.
//
#include <index/IndexWriterConfig.h>
#include <index/IndexWriter.h>
#include "directory/RAMDirectory.h"

using namespace std;

int main(int argc, char *argv[]) {
    auto analyzer = new lucene::StandardAnalyzer();
    lucene::Directory* directory = new lucene::RAMDirectory();
    auto config = new lucene::IndexWriterConfig(analyzer);
    auto indexWriter = new lucene::IndexWriter(directory, config);
    auto doc = new lucene::Document();
    string text = "This is the text to be indexed";
    doc->add(new lucene::TextField("FieldName", text, lucene::TextField::TYPE_STORED));
    indexWriter->AddDocument(doc);
    indexWriter->close();
    return 0;
}


