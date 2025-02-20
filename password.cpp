#include <iostream>
using namespace std;

int main() {
    string password;

    cout << "Enter your password: ";
    getline(cin, password);

    bool isStrong = true;

    // Check password length
    if (password.length() < 8) {
        isStrong = false;
    }

    // Check for uppercase, lowercase, digit, and special character
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    for (char c : password) {
        if (isupper(c)) hasUpper = true;
        if (islower(c)) hasLower = true;
        if (isdigit(c)) hasDigit = true;
        if (!isalnum(c)) hasSpecial = true;
    }

    if (!hasUpper || !hasLower || !hasDigit || !hasSpecial) {
        isStrong = false;
    }

    if (isStrong) {
        cout << "Strong password!" << endl;
    } else {
        cout << "Weak password. Please try again." << endl;
    }

    return 0;
}