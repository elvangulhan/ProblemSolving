#include <iostream>
#include <cmath>

using namespace std;

void solve(){
    long long n, a, sum = 0; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        sum += a;
    }
    long long sr = sqrt(sum);
    if(sr * sr == sum)
        cout << "YES" << "\n";
        else
        cout << "NO" << "\n";
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}