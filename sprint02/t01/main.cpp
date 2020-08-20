#include "cuWord.h"

int main(int argc, char **argv) {
    std::multiset<std::string> words;

    validator(argc, argv, words);
    streamToFile(words, std::string(argv[1]));
}