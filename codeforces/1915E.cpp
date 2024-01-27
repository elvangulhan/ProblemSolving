#include <iostream>
#include <vector>

using namespace std;

void solve(){
    int odd = 0, even = 0, stop = 0, n; cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int l = 1; l <= n && stop == 0; l++){
        for(int r = n; r >= l; r--){
            odd = 0; even = 0;
            for(int j = l; j <= r; j++){
                if(j % 2 == 0)
                    odd += a[j-1];
                else
                    even += a[j-1];
            }
            if(odd == even){
                cout << "YES" << "\n";
                stop = 1;
                break;
            }
        }
    }
    if(odd != even)
        cout << "NO" << "\n";
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}