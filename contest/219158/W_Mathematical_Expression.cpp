#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    char s, eq;

    cin >> a >> s >> b >> eq >> c;

    int result;

    if (s == '+') {
        result = a + b;
    } else if (s == '-') {
        result = a - b;
    } else if (s == '*') {
        result = a * b;
    }

    if (result == c) {
        cout << "Yes" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
