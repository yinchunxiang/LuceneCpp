cmake_minimum_required(VERSION 3.0)

project(LuceneCpp)

add_definitions("-Wall -lpthread -g")

message("project source dir: " ${PROJECT_SOURCE_DIR})
include_directories("${PROJECT_SOURCE_DIR}/include")

file(GLOB_RECURSE headers "${PROJECT_SOURCE_DIR}/include/*.h")
message("headers: " ${headers})

add_executable(demo "${PROJECT_SOURCE_DIR}/src/demo/main.cc" ${headers} include/document/Document.h include/document/TextField.h include/document/DocumentWriter.h include/index/Term.h include/document/DocumentWriterPerThread.h include/index/LiveIndexWriterConfig.h include/document/DocumentConsumer.h include/document/DefaultIndexingChain.h include/index/TermsHash.h include/index/TermsHashPerField.h include/document/FieldInfo.h include/document/DocValuesType.h include/index/FieldInvertState.h include/index/FreqProxTermsWriter.h include/index/FreqProxTermsWriterPerField.h include/index/TermVectorsConsumer.h include/index/TermVectorsWriter.h)


set(CMAKE_CXX_COMPILER  "clang++" )
set(CMAKE_CXX_FLAGS     "-std=c++11")
set(CMAKE_CXX_FLAGS     "-Wall")