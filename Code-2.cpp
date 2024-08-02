#include <iostream>
#include <string>
using   namespace   std;

string capSpace(const string& word) {
    string result;
    for (char c : word) {
        if (isupper(c)) {
            result += ' ';
        }
        result += tolower(c);
    }
    return result;
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;
    cout << capSpace(word) << endl;
    return 0;
}
