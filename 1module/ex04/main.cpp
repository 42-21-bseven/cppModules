#include <iostream>
#include <sstream>
#include <fstream>
#include <cstring>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Invalid arguments\n";
        return 1;
    }

    std::string fileName = argv[1];
    std::ifstream fileStream;
    
    fileStream.open(fileName.c_str());
    if (!fileStream)
    {
        std::cerr << "File not opening" << std::endl;
        return 1;
    }

    std::ofstream replacedFileStream;

    replacedFileStream.open((fileName + ".replace").c_str(), std::ios::trunc);
    if (!replacedFileStream)
    {
        fileStream.close();
        std::cerr << "Can't open created file" << std::endl;
        return 1;
    }
    
    std::string const replaceFrom = argv[2];
    std::string replaceTo = argv[3];
    std::string line;

    while (std::getline(fileStream, line)){

        size_t n = strlen(replaceFrom.c_str());
        size_t pos = line.find(replaceFrom.c_str());

        while (pos != std::string::npos){

            line.erase(pos, n);
            line.insert(pos, replaceTo);
            pos += strlen(replaceTo.c_str());
            pos = line.find(replaceFrom.c_str(), pos, n);
        }

        replacedFileStream << line;
        if (!fileStream.eof())
            replacedFileStream << '\n';
    }
    fileStream.close();
    replacedFileStream.close();   

    return 0;
}