
#include "htmlwriterclassadapter.h"

namespace dp = design_pattern;

dp::HtmlWriterClassAdapter::HtmlWriterClassAdapter(const std::string& filename)
    : HtmlWriter(filename)
{}

void dp::HtmlWriterClassAdapter::openFile()
{
    this->fileOpen();
}

void dp::HtmlWriterClassAdapter::closeFile()
{
    this->fileClose();
}

void dp::HtmlWriterClassAdapter::writeData(const std::string& stringDat)
{
    this->fileWrite(stringDat);
}
