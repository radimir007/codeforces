#include <iostream>
using namespace std;

int main() {
    int x, n = 0;
    cin >> x;
    string input;

    for (int i = 0; i < x; i++) {
        cin >> input;
        if (input == "X++")
            n++;
        else if (input == "++X")
            ++n;
        else if (input == "X--")
            n--;
        else if (input == "--X")
            --n;
    }

    cout << n << endl;

    return 0;
}