#include <iostream>
#include <algorithm>

using namespace std;

void solve(){
    int n, g = 0; cin >> n;
    int line[n][1][2];
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        line[i][0][0] = a;
        line[i][0][1] = b;
    }
    for(int j = 0; j < n; j++){
        for(int k = 0; k < n; k++){
            if(line[j][0][0] < line[k][0][0] && line[j][0][1] > line[k][0][1])
            g++;
        }
    }
    cout << g << "\n";
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}