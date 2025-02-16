#include <iostream>
using namespace std;

int main() {
    int value;
    cin >> value;

    for (int i = 1; i < value; i++) {
        if (i % 2 == 0 && (value - i) % 2 == 0) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}
