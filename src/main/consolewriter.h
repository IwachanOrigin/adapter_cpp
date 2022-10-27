
#ifndef CONSOLE_WRITER_H_
#define CONSOLE_WRITER_H_

#include "writer.h"

namespace design_pattern
{

class ConsoleWriter : public Writer
{
public:
    explicit ConsoleWriter() = default;
    virtual ~ConsoleWriter() = default;

    void openFile() {}
    void closeFile() {}
    void writeData(const std::string& stringDat);
};

}

#endif // CONSOLE_WRITER_H_
