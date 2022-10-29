
#ifndef HTMLWRITERCLASSADAPTER_H_
#define HTMLWRITERCLASSADAPTER_H_

#include "writer.h"
#include "htmlwriter.h"

namespace design_pattern
{

class HtmlWriterClassAdapter : public HtmlWriter, public Writer
{
public:
    explicit HtmlWriterClassAdapter(const std::string& filename);
    virtual ~HtmlWriterClassAdapter() = default;

    void openFile();
    void writeData(const std::string& stringDat);
    void closeFile();

};

}

#endif // HTMLWRITERCLASSADAPTER_H_
