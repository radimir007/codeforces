#include <iostream>
using namespace std;

int main() {
    int n, row[3], rowCount = 0, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> row[j];
            if (row[j] == 1)
                rowCount++;
        }
        if (rowCount >= 2)
            count++;
        rowCount = 0;
    }

    cout << count << endl;

    return 0;
}