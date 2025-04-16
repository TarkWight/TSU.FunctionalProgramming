#include "CStyle/CStyleSolution.hpp"
#include "Modern/ModernSolution.hpp"

#include <iostream>
#include <fstream>

std::vector<int> readFile() {
    std::ifstream fileInput("input.txt");

    std::vector<int> data;
    std::copy(
        std::istream_iterator<int>(fileInput),
		std::istream_iterator<int>(),
        std::back_inserter(data)
        );

    return data;
}

int main() {
    std::cout << "Modern C++ Solution" << std::endl;
    ModernSolution::run(readFile());

	std::cout << std::endl;
 
    std::cout << "C-Style Solution" << std::endl;
    CStyleSolution::run(readFile());

    return 0;
}