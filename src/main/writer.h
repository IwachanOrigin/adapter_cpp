
#ifndef WRITER_H_
#define WRITER_H_

#include <string>

namespace design_pattern
{

class Writer
{
public:
    explicit Writer() = default;
    ~Writer() = default;

    virtual void openFile() = 0;
    virtual void writeData(const std::string& stringDat) = 0;
    virtual void closeFile() = 0;
};

}

#endif // WRITER_H_
