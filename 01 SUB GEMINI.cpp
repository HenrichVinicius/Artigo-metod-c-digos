#include <bits/stdc++.h>
using namespace std;
int main() {
    // Otimização básica de I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long s = 0;
    // Correção: alterado de i < n-1 para i < n para incluir todos os n elementos
    for (int i = 0; i < n; i++) {
        s += a[i];
    }
    cout << s << "\n";
    return 0;
}