#include <iostream>

void printOddNumbers(int last) {
    if (last <= 1) {
        return;
    }
    if (last % 2 != 0) {
        std::cout << last << " ";
    }
    printOddNumbers(last - 1);
}

int main() {
    printOddNumbers(100);
    return 0;
}