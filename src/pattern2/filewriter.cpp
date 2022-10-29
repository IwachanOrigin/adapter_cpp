
#include "filewriter.h"
#include <iostream>

namespace dp = design_pattern;

dp::FileWriter::FileWriter(const std::string& filename)
    : m_filename(filename)
{
}

void dp::FileWriter::openFile()
{
    m_ofs.open(m_filename.c_str(), std::ios::trunc);
}

void dp::FileWriter::closeFile()
{
    m_ofs.close();
}

void dp::FileWriter::writeData(const std::string& stringDat)
{
    m_ofs << stringDat.c_str() << std::endl;
}
