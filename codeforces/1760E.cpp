#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int n, co = 0, fz = -1, fzc = 0, lo = -1, loc = 0, c = 0; cin >> n;
    vector <int> m(n);
    for(int i = 0; i < n; i++){
        cin >> m[i];
        co += (m[i] == 1);
    }
    for(int i = 0; i < n; i++){
        if(m[n-i-1] != 0 && lo == -1)
            lo = n-i-1;
        if(m[i] != 1){
            if(fz == -1)
                fz = i;
            fzc++;
            continue;
        }
        for(int j = i; j < n; j++){
            if(m[j] == 0){
                c++;
            }
        }
    }
    fzc -= co - ((n - 1 - fz) - fzc); 
    loc -= (n - co) - (lo - loc);
    if(fzc >= loc)
        c += fzc;
    else
        c += loc;
    cout << c << "\n";
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}