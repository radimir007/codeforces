#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x % 2 == 0) {
        if ((x/2)%2 == 0) {
            cout << "YES" << endl;
        }
        else {
            int a = x/2+1;
            int b = x/2-1;
            if (b != 0 && a%2 == 0 && b%2 == 0) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}