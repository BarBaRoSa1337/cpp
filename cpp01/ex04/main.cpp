#include <iostream>
#include <fstream>
#include <string>

void FileReplace(std::ifstream &inFile, std::ofstream &outFile, std::string s1, std::string s2) {
    std::string line;

    while (inFile)
    {
        std::size_t pos = 0;
        getline(inFile, line);
        while (1)
        {
            pos = line.find(s1, pos);
            if (pos != std::string::npos) 
            {
                line.erase(pos, s1.length());
                line.insert(pos, s2);
            }
            else
                break;
        }
        outFile << line;
        if (inFile.eof())
            break;
        outFile << std::endl;
    }
}

int main(int ac, char *av[]) {
   std::ofstream outFile;
   std::ifstream inFile;

    if (ac != 4) {
        std::cerr << "Error: Usage: <program_name> <filename> <string1> <string2>\n";
        return (1);
    }
    std::string s1 = av[2];
    std::string s2 = av[3];
    inFile.open(av[1], std::ios::in);
    if (!inFile.is_open())
    {
        std::cerr << "Error: inFile not open!\n";
        return (1);
    }
    std::string outFileName = av[1];
    outFile.open(outFileName + ".replace", std::ios::trunc | std::ios::out);
    if (!outFile.is_open())
    {
        inFile.close();
        std::cerr << "Error: outFile not open!\n";
        return (1);
    }
    if (!s1[0] || !s2[0]) {
        inFile.close();
        outFile.close();
        std::cerr << "Error: string1 and|or string2 is empty\n";
        return (1);
    }
    FileReplace(inFile, outFile, s1, s2);
    inFile.close();
    outFile.close();
    return (0);
}