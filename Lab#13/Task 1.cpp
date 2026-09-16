#include <iostream>
#include <string>
using namespace std;

template <typename T>
void printTwice(T val) {
    cout << val << endl;
    cout << val << endl;
}

int main() {
    cout << "--- Int Output ---" << endl;
    printTwice(10);
    cout << "\n--- Double Output ---" << endl;
    printTwice(5.75);
    cout << "\n--- String Output ---" << endl;
    printTwice("Hello World");

    return 0;
}
