#include <bits/stdc++.h>

using namespace std;
int main() {
    int A, B, C;
    cin >> A >> B >> C;
    cout << max(B + C - A, 0) << "\n";
}