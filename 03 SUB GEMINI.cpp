#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long s = 0;
    for(int i = 0, x; i < n; i++){
        cin >> x;
        s += x;
    }
    // Correção: conversão explícita de 's' para double 
para evitar divisão inteira
    double media = (double)s / n;
    cout << fixed << setprecision(2) << media << "\n";
}