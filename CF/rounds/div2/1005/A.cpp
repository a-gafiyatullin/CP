#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int t;
    int n;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        string s;

        for (int i = 0; i < n; i++) {
            char ch;

            cin >> ch;
            s.push_back(ch);
        }

        string s2;

        int counter = 0;
        while (true) {
            bool changed = false;

            auto pos = s.find('1');
            if (pos != std::string::npos) {
                s2 += s.substr(pos);
                s = s.substr(0, pos);
                counter++;
                changed = true;
            }

            pos = s2.find('0');
            if (pos != std::string::npos) {
                s += s2.substr(pos);
                s2 = s2.substr(0, pos);
                counter++;
                changed = true;
            }

            if (!changed) {
                break;
            }
        }

        cout << counter << endl;
    }

    return 0;
}
