#include <iostream>
#include <fstream>
#include <string>

void replaceAndWriteToFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    if (s1.empty()) {
        std::cerr << "Error: The search string cannot be empty." << std::endl;
        return;
    }

    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return;
    }

    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename);
    if (!outputFile) {
        std::cerr << "Error: Unable to create file " << outputFilename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        std::string result;
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            result.append(line, 0, pos);
            result += s2;
            pos += s1.length();
            line = line.substr(pos);
        }
        result += line;
        outputFile << result << '\n';
    }

    inputFile.close();
    outputFile.close();
    std::cout << "Replacement complete. Output saved in " << outputFilename << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    replaceAndWriteToFile(argv[1], argv[2], argv[3]);
    return 0;
}
