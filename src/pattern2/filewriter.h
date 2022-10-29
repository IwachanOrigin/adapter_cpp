
#ifndef FILE_WRITER_H_
#define FILE_WRITER_H_

#include "writer.h"
#include <fstream>

namespace design_pattern
{

class FileWriter : public Writer
{
public:
    explicit FileWriter(const std::string& filename);
    virtual ~FileWriter() = default;

    void openFile();
    void closeFile();
    void writeData(const std::string& stringDat);

private:
    std::ofstream m_ofs;
    std::string m_filename;
};

}

#endif // FILE_WRITER_H_
