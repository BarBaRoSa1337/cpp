#include <iostream>
// #include <fstream>
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

    // std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(filename + ".replace");
    if (!outputFile) {
        std::cerr << "Error: Unable to create file " << filename + ".replace" << std::endl;
        return;
    }

    std::string line;
    while(inputFile)
	{
		std::size_t	pos = 0;
		getline(inputFile, line);
		while (true)
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
		outputFile << line ;
		if (inputFile.eof())
			break ;
		outputFile << std::endl;
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
