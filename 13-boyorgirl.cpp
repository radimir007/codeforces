#include <iostream>
using namespace std;

int checkDistincts(const string& text) {
    int count = 0;
    for (int i = 0; i < text.length(); i++) {
        for (int j = 0; j < text.length(); j++) {
            if (text[i] == text[j] && i != j)
                count++;
        }
    }
    return text.length() - count/2;
}

int main() {
    string text;
    cin >> text;

    int dist = checkDistincts(text);

    if (dist % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else 
        cout << "IGNORE HIM!" << endl;

    return 0;
}