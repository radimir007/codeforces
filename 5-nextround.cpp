#include <iostream>
using namespace std;

int main() {
    int n, k;
    int advance = 0;
    cin >> n >> k;
    int p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    if (p[k-1] == 0) {
        for (int i = 0; i < n; i++) {
            if (p[i] != 0) {
                advance++;
            } else {
                break;
            }
        }
    } else {
        advance += k;
        for (int i = k; i < n; i++) {
            if (p[i] == p[k-1]) {
                advance++;
            }
        }
    }

    if (p[0] == 0 && p[k] == 0) {
        cout << 0 << endl;
    } else {
        cout << advance << endl;
    }

    return 0;
}