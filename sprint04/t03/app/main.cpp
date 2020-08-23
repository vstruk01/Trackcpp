#include "dCalculator.h"

int main() {
    std::map<std::string, long long> operands;
    int result;

    while (true) {
        std::cout << ":> ";
        calculator(operands);
    }
}