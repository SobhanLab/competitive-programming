#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long x;
    cin >> x;
    long long mx = x;

    for (int i=1; i<n; i++) {
        cin >> x;
        if (x > mx) {
            mx = x;
        }
    }

    cout << mx << endl;

    return 0;
}
