#include <iostream>

int main(int argc, char** argv) 
{
    if(argc < 2) {
        std::cerr << "Insufficient Arguments!" << std::endl;
        return -1;
    }

    std::cout << "Hello! " << argv[1] << std::endl;

    return 0;
}