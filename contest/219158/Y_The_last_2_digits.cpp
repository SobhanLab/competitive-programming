    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        a %= 100;
        b %= 100;
        c %= 100;
        d %= 100;
     
        long long total = a * b * c * d;

        if(total % 100 <=9) cout << 0;
        cout << total % 100 << endl;
     
        return 0;
    }