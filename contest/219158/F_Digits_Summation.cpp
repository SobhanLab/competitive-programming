#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    int lastn = n % 10;
    int lastm = m % 10;

    cout << lastn + lastm << endl;

    return 0;
}
