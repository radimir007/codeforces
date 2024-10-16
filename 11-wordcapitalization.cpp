#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    char firstL;
    cin >> text;

    firstL = ::toupper(text[0]);
    text[0] = firstL;

    cout << text << endl;

    return 0;
}