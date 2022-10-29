
#ifndef HTML_WRITER_H_
#define HTML_WRITER_H_

#include <fstream>

namespace design_pattern
{

class HtmlWriter
{
public:
    explicit HtmlWriter(const std::string& filename);
    ~HtmlWriter() = default;

    void fileOpen();
    void fileClose();
    void fileWrite(const std::string& stringDat);

private:
    std::ofstream m_ofs;
    std::string m_filename;

    std::string conversionString(const std::string& stringDat);
};

}

#endif // HTML_WRITER_H_
