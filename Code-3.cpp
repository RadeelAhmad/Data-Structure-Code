#include <iostream>
#include <unordered_set>
using namespace std;

int sharedLetters(string word1, string word2) {
    unordered_set<char> letters;
    int count = 0;
    
    for (char c : word1) {
        letters.insert(c);
    }
    
    for (char c : word2) {
        if (letters.count(c) > 0) {
            count++;
        }
    }
    
    return count;
}

int main() {
    string word1, word2;
    char choice;
    
    do {
        cout << "Enter word 1: ";
        cin >> word1;
        cout << "Enter word 2: ";
        cin >> word2;
        
        int sharedCount = sharedLetters(word1, word2);
        cout << "Number of shared characters: " << sharedCount << endl;
        
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}
