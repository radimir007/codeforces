#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string text1, text2;
    int diff = 0;
    cin >> text1 >> text2;

    transform(text1.begin(), text1.end(), text1.begin(), ::tolower);
    transform(text2.begin(), text2.end(), text2.begin(), ::tolower);

    for (int i = 0; i < text1.length(); i++) {
        if (text1[i] != text2[i] && text1[i] < text2[i]) {
            diff--;
            break;
        }
            
        else if (text1[i] != text2[i] && text1[i] > text2[i]) {
            diff++;
            break;
        }
            
    }

    cout << diff << endl;

    return 0;
}