#include "dCalculator.h"

void calculator(std::map<std::string, long long>& operands) {
    std::string s;

    std::getline(std::cin, s);
    std::regex reg(R"(^([+-]?[0-9]+|[a-zA-Z]+)\s*([-+*\/]{1})\s*([+-]?[0-9]+|[a-zA-Z]+)\s*((=\s*([a-zA-Z]+))?)$)");
    std::smatch sm;
    long long arg1, arg2;
    std::string sarg1, sarg2;

    if (!std::regex_search(s, sm, reg)) {
        std::cerr << "invalid input\n";
        return;
    }
    sarg1 = sm[1];
    sarg2 = sm[3];

    if (sarg1.size() > 9) {
        std::cerr << "operand1 is out of range\n";
        return;
    } else if (sarg2.size() > 9) {
        std::cerr << "operand2 is out of range\n";
        return;
    }
    if (!getArg(operands, arg1, sm[1]) || !getArg(operands, arg2, sarg2))
        return;
    if (sm[2] == "/" && arg2 == 0) {
        std::cerr << "division by zero\n";
        return;
    }
    printResult(arg1, arg2, operands, sm);
}