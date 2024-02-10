#include <iostream>
#include <vector>
#include <string>

int main(int argc, char* argv[]){
    std::string filePath;

    for(int i = 1; i < argc; i++) {
        std::string arg = argv[i];
        if (arg == "-e") {
            if (i + 1 < argc) {
                filePath = argv[i++];
            } else {
                std::cerr << "-e options requires one argument." << std::endl;
                return 1;
            }
        }
    }

    if (!filePath.empty()){
        std::cout << "File path: " << filePath << std::endl;
    } else {
        std::cout << "No file path provided." << std::endl;
    }

    return 0;
}
