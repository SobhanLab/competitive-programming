#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;
    cin >> n;

    int x = (int)n;

    if (n == x) {
        cout << "int " << x << endl;
    } else {
        cout << "float " << x << " " << n - x << endl;
    }

    return 0;
}
