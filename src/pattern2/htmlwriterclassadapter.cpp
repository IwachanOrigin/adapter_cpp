
#include "htmlwriterclassadapter.h"
#include "htmlwriter.h"

namespace dp = design_pattern;

dp::HtmlWriterClassAdapter::HtmlWriterClassAdapter(const std::string& filename)
{
    m_writer = new HtmlWriter(filename);
}

dp::HtmlWriterClassAdapter::~HtmlWriterClassAdapter()
{
    delete m_writer;
}

void dp::HtmlWriterClassAdapter::openFile()
{
    m_writer->fileOpen();
}

void dp::HtmlWriterClassAdapter::closeFile()
{
    m_writer->fileClose();
}

void dp::HtmlWriterClassAdapter::writeData(const std::string& stringDat)
{
    m_writer->fileWrite(stringDat);
}
