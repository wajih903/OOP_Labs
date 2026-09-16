#include <iostream>
using namespace std;

template <typename T>
T findMin(T a, T b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {

    cout << "Min int (15, 8): " << findMin(15, 8) << endl;

    cout << "Min double (4.2, 9.1): " << findMin(4.2, 9.1) << endl;

    cout << "Min char ('x', 'c'): " << findMin('x', 'c') << endl;

    return 0;
}
