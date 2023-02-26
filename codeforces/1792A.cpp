#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    // if the health is more than 2, the second skill must be used.
    int n, one = 0, two = 0, s = 0; cin >> n;
    for(int i = 0; i < n; i++){
        int m; cin >> m;
        if(m > 2)
            s++;
        else if(m == 1)
            one++;
        else if(m == 2)
            two++;
    }
    if(one % 2 == 1){
        s++; one--;
    }
    if(two % 2 == 1){
        s++; two--;
    }
    s += (one / 2) + two;
    cout << s << "\n";
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}