#include <iostream>
#include <sstream>
#include <regex>
#include <fstream>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Invalid arguments\n";
        // exit(1);
        return 1;
    }

    std::string fileName = argv[1];
    std::ifstream fileStream(fileName);
    if (!fileStream.is_open())
    {
        std::cerr << "File not opening" << std::endl;
        // exit(1);
        return 1;
    }
    
    std::string replaceFrom = argv[2];
    std::string replaceTo = argv[3];


    std::stringstream stringStream;

    stringStream << fileStream.rdbuf();

    std::string fileContent = stringStream.str();

    size_t findResultPosition = 0;

    while ((findResultPosition = fileContent.find(replaceFrom)) != std::string::npos)
    {
        fileContent.erase(findResultPosition, replaceFrom.length());
        fileContent.insert(findResultPosition, replaceTo);
    }

    std::ofstream replacedFileStream(fileName + ".replace");

    if (!replacedFileStream.is_open())
    {
        std::cerr << "Can't open created file" << std::endl;
        // exit(1);
        return 1;
    }

    replacedFileStream << fileContent;
    fileStream.close();
    replacedFileStream.close();
    return 0;
}