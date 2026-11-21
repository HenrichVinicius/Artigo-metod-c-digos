#include <bits/stdc++.h>
using namespace std;
int main() {
    // Otimização de I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int& i : a) {
        cin >> i;
    }
    // Correção: inicializa com o primeiro elemento do 
vetor
    int maior = a[0];
    for (int x : a) {
        maior = max(maior, x);
    }
    cout << maior << "\n";
    return 0;
}