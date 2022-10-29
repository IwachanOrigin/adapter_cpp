
#include "htmlwriter.h"
#include <iostream>

namespace dp = design_pattern;

dp::HtmlWriter::HtmlWriter(const std::string& filename)
    : m_filename(filename)
{}

void dp::HtmlWriter::fileOpen()
{
    m_ofs.open(m_filename.c_str(), std::ios::trunc);
}

void dp::HtmlWriter::fileClose()
{
    m_ofs.close();
}

void dp::HtmlWriter::fileWrite(const std::string& stringDat)
{
    m_ofs << this->conversionString(stringDat) << std::endl;
}

std::string dp::HtmlWriter::conversionString(const std::string& stringDat)
{
    return "<tag>" + stringDat + "</tag>";
}
