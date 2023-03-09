#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

void solve(){
    int n, t; cin >> n;
    vector <int> m(n);
    for(int i = 0; i < n; i++)
        cin >> m[i];
    sort(m.begin(), m.end());
    t = m[0];
    for(int i = 1; i < n; i++){
        if(m[i] <= t){
            cout << "no\n";
            return;
        }else{
            t = m[i];
        }
    }
    cout << "yes\n";
}
 
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}