#include <bits/stdc++.h>
using namespace std;

bool f(string s, int i, int n) {
    if (i >= n / 2) {
        return true;
    }
    else if (s[i] != s[n - i - 1]) {
        return false;
    } else {
        return f(s, i + 1, n);
    }
}

int main() {
    string s;
    cin >> s;
    int n = s.length();

    if (f(s, 0, n)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}

