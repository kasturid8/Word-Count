#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int countWordsInFile(const std::string& filename) {
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return -1;
    }

    std::string word;
    int wordCount = 0;

    while (file >> word) {
        wordCount++;
    }

    file.close();
    return wordCount;
}

int main() {
    std::string filename;
    std::cout << "Enter the name of the text file: ";
    std::getline(std::cin, filename);

    int totalWordCount = countWordsInFile(filename);

    if (totalWordCount >= 0) {
        std::cout << "Total word count in file \"" << filename << "\": " << totalWordCount << std::endl;
    }

    return 0;
}

