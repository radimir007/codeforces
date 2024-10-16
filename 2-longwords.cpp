#include <iostream>
using namespace std;

int main() {
    string text;
    int count = 0, n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> text;

        if (text.length() > 10) {
            for (int i = 0; i < text.length(); i++) {
                if (i > 0 && i < text.length()) {
                    if (i == text.length()-1) {
                        cout << count;
                    } else {
                        count++;
                    }
                }
                if (i == 0 || i == text.length()-1) {
                    cout << text[i];
                }
            }
        } else {
            cout << text;
        }
        count = 0;
        cout << endl;
    }

    return 0;
}