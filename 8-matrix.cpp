#include <iostream>
using namespace std;
 
int main() {
    int row, col, x, result = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> x;
            if (x == 1) {
                row = i+1;
                col = j+1;
            }
        }
    }

    if (row > 3) {
        result += row-3;
    } else {
        result += 3-row;
    }
    if (col > 3) {
            result += col-3;
    } else {
            result += 3-col;
    }

    cout << result << endl;

    return 0;
}