#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int lineN; long long nC = 0, sub = 0;
    cin >> lineN;
    vector <int> l(lineN);
    for(int i = 0; i < lineN; i++){
        cin >> l[i];
        if(l[i] < 0){
            nC++;
            l[i] = l[i] * -1;
        }
        sub += l[i];
    }
    sort(l.begin(), l.end());
    if(nC % 2 == 1)
        sub -= 2 * l[0];
    cout << sub << "\n";
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}