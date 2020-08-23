#include "dCalculator.h"

void printResult(int arg1, int arg2, 
                 std::map<std::string, long long> &operands, std::smatch sm) {
    int result;
    std::string veriable = sm[6];

    if (sm[2] == "+") {
        result = arg1 + arg2;
    } else if (sm[2] == "-") {
        result = arg1 - arg2;
    } else if (sm[2] == "*") {
        result = arg1 * arg2;
    } else {
        result = arg1 / arg2;
    }
    std::cout << result << '\n';
    if (veriable.size() != 0)
        operands[veriable] = result;
}
