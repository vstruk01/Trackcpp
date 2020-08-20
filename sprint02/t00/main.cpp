#include "uWord.h"

int main(int argc, char **argv) {
    std::set<std::string> words;

    validator(argc, argv, words);
    streamToFile(words, std::string(argv[1]));
}