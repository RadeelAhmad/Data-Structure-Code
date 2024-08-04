#include <iostream>
#include <cstring>

bool validatePassword(const char* password) {       
    int length = strlen(password);  
    if (length < 6 || length > 24) {
        return false;
    }

    bool hasUppercase = false;
    bool hasLowercase = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;
    int repeatedCount = 0;

    for (int i = 0; i < length; i++) {          
        if (password[i] >= 'A' && password[i] <= 'Z') {
            hasUppercase = true;
        } else if (password[i] >= 'a' && password[i] <= 'z') {
            hasLowercase = true;
        } else if (password[i] >= '0' && password[i] <= '9') {
            hasDigit = true;
        } else if (password[i] >= 33 && password[i] <= 126) { // ASCII of special characters
            hasSpecialChar = true;
        }

        if (i > 0 && password[i] == password[i - 1]) { // Check for repeated characters
            repeatedCount++;
        }
    }

    return hasUppercase && hasLowercase && hasDigit && hasSpecialChar && repeatedCount <= 2;
}

int main() {
    using namespace std;

    char password[25];
    cout << "Enter password: ";
    cin.getline(password, 25); 

    if (validatePassword(password)) {
        cout << "Password is valid." << endl;
    } else {
        cout << "Password is invalid." << endl;
    }

    return 0;
}
