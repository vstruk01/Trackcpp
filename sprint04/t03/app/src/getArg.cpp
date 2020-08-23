#include "dCalculator.h"

bool getArg(std::map<std::string, long long> &operands, long long& arg,
            std::string sarg) {
    if (sarg[0] <= '9') {
        arg = stoll(sarg);
    } else {
        if (operands.find(sarg) == operands.end()) {
            std::cerr << "invalid operand1\n";
            return false;
        }
        arg = operands[sarg];
    }
    return true;
}