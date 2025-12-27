#include <bits/stdc++.h>
using namespace std;
int main(){
    double x, p;
    cin >> x >> p;

    double ori = p / (1 - x / 100);
    cout << fixed << setprecision(2) << ori;

    return 0;
}