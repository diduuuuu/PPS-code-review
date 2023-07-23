#include <iostream>
#include <string>
using namespace std;

bool is_vowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool has_vowel_group(string password) {
    for (int i = 0; i < password.length() - 2; i++) {
        if (is_vowel(password[i]) && is_vowel(password[i + 1]) && is_vowel(password[i + 2])) {
            return true;
        }
    }
    return false;
}

bool has_consecutive_chars(string password) {
    for (int i = 0; i < password.length() - 1; i++) {
        if (password[i] == password[i + 1] && password[i] != 'e' && password[i] != 'o') {
            return true;
        }
    }
    return false;
}

bool is_valid_password(string password) {
    if (!has_vowel_group(password) || has_consecutive_chars(password)) {
        return false;
    }
    for (int i = 0; i < password.length() - 1; i++) {
        if ((password[i] == 'e' || password[i] == 'o') && password[i] == password[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    while (true) {
        string password;
        cin >> password;

        if (password == "end") {
            break;
        }

        if (is_valid_password(password)) {
            cout << "<" << password << "> is acceptable." << endl;
        } else {
            cout << "<" << password << "> is not acceptable." << endl;
        }
    }

    return 0;
}
