#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    bool is_upper = false,
         is_lower = false,
         is_digit = false,
         is_punct = false;

    string password;
    cin >> password;

    if (8 <= password.size() && password.size() <= 14) {
        for (const char c : password) {
            if (!is_upper) is_upper = isupper (c);
            if (!is_lower) is_lower = islower (c);
            if (!is_digit) is_digit = isdigit (c);
            if (!is_punct) is_punct = ispunct (c);
        }
        if (is_upper + is_lower + is_digit + is_punct >= 3){
            cout << "YES"s << endl;
        } else {
            cout << "NO"s << endl;
        }
    } else {
        cout << "NO"s << endl;
    }
}