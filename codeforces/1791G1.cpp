#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int n, c, s = 0; cin >> n >> c;
    vector <int> path(n);
    for(int i = 0; i < n; i++){
        cin >> path[i];
        if(i > 0)
            path[i] += i;
    }
    sort(path.begin(), path.end());
    for(int i = 0; i < n; i++){
        if(c >= (path[i]+1)){
            c -= path[i]+1;
            s++;
        }else{
            break;
        }
    }
    cout << s << "\n";
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}