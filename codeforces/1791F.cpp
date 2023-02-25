#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int aN, lineN; cin >> aN >> lineN;
    vector <int> a(aN+1);
    for(int i = 1; i <= aN; i++)
        cin >> a[i];
    for(int i = 1; i <= lineN; i++){
        int sign;
        cin >> sign;
        if(sign == 1){
            int l, r; cin >> l >> r;
            while(l != (r+1)){
                int sum = 0, n = a[l];
                while(n != 0){
                    sum = sum + n % 10;
                    n = n / 10;
                }
                a[l] = sum;
                l++;
            }
        }else{
            int x;
            cin >> x;
            cout << a[x] << "\n";
        }
    }
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}