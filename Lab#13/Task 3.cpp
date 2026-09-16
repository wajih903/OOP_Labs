#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Pair {
private:
    T first;
    T second;

public:

    Pair(T f, T s) {
        first = f;
        second = s;
    }

    T getFirst() {
        return first;
    }

    T getSecond() {
        return second;
    }

    void display() {
        cout << "First: " << first << " | Second: " << second << endl;
    }
};

int main() {

    Pair<int> p1(10, 20);
    p1.display();


    Pair<double> p2(3.14, 2.71);
    p2.display();


    Pair<string> p3("Raja", "Wajih");
    p3.display();

    return 0;
}
