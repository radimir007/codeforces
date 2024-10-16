#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n, m, a;
    uint64_t row, col;
    cin >> n >> m >> a;

    row = ceil(n/a);
    col = ceil(m/a);

    cout << row * col << endl;

    return 0;
}