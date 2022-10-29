
#ifndef HTMLWRITERCLASSADAPTER_H_
#define HTMLWRITERCLASSADAPTER_H_

#include "writer.h"

namespace design_pattern
{

class HtmlWriter;

class HtmlWriterClassAdapter : public Writer
{
public:
    explicit HtmlWriterClassAdapter(const std::string& filename);
    virtual ~HtmlWriterClassAdapter();

    void openFile();
    void writeData(const std::string& stringDat);
    void closeFile();

private:
    HtmlWriter* m_writer;

};

}

#endif // HTMLWRITERCLASSADAPTER_H_
