
#include "filewriter.h"
#include "consolewriter.h"
#include <iostream>

using namespace design_pattern;

void writeString(const std::string& stringDat, Writer* writer)
{
    writer->openFile();
    writer->writeData(stringDat);
    writer->closeFile();
}

int main(int argc, char* argv[])
{
    // output console
    writeString("testConsoleWrite", new ConsoleWriter());
    // output file
    writeString("testFileWrite", new FileWriter("test.txt"));

    return 0;
}

