#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string modifiedString(string& text) {
    string mod = ".";

    for (int i = 0; i < text.length(); i++) {
        transform(text.begin(), text.end(), text.begin(), ::tolower);
    }

    for (int i = 0; i < text.length(); i++) {
        if (text[i] != 'a' && text[i] != 'e' && text[i] != 'i' && text[i] != 'o' && text[i] != 'u' && text[i] != 'y') {
            mod += text[i];
            mod += '.';
        }
    }

    mod.erase(mod.length()-1);

    return mod;

}

int main() {
    string text;
    cin >> text;

    cout << modifiedString(text) << endl;

    return 0;
}