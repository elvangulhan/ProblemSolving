#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int letters[26];

void solve(){
    int n; string w; char t = 'a'; cin >> n >> w;
    for(int i = 0; i < n; i++)
        if(w[i] > t)
            t = w[i];
    
    cout << letters[t] << "\n";
}

int main() {
    int c = 1;
    for(char i = 'a'; i <= 'z'; i++){
        letters[i] = c;
        c++;
    }
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}