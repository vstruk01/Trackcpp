#include "src/inventory.h"

int main() {
    std::string s;
    inventory i;

    while (true) {
        std::cout << "Enter command:> ";
        std::cin >> s;
        if (s == "insert") {
            i.insert();
        } else if (s == "remove") {
            i.remove();
        } else if (s == "help") {
            if (i.check_andline())
                continue;
            i.help();
        } else if (s == "exit") {
            if (i.check_andline())
                continue;
            std::cout << "Bye.\n";
            return 0;
        } else if (s == "show") {
            if (i.check_andline())
                continue;
            i.show();
        } else {
            i.invalid("Invalid commad.");
            std::getline(std::cin, s);
        }
    }
}
