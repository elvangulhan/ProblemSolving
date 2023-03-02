#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    // 0 <= l <= r <= n -1
    // Al = Al+1 = AL+2 ... = Ar
    // l = 0 || Al-1 > Al
    // r = n -1 || Ar < Ar+1
    int n, c = 0; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int l = 0; l < n; l++){
        int ls = v[l];
        for(int r = l; r < n; r++){
            if(ls != v[r])
                break;
            if((l == 0 || v[l-1] > v[l]) && (r == n-1 || v[r] < v[r+1]))
                c++;
        }
    }
    cout << (c == 1 ? "yes" : "no") << "\n";
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}