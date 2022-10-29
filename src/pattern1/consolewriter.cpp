
#include "consolewriter.h"
#include <iostream>

namespace dp = design_pattern;

void dp::ConsoleWriter::writeData(const std::string& stringDat)
{
    std::cout << stringDat << std::endl;
}


