#include <iostream>
using namespace std;

// our candy at (1,1) ~ (x,y) 

void move(){
    int aPos_x = 0,
        aPos_y = 0;
    int stepN;
    cin >> stepN;
    string step;
    cin >> step;
    for(int i = 0; i < stepN; i++){
        if(step[i] == 'U') aPos_y++;
        if(step[i] == 'D') aPos_y--;
        if(step[i] == 'L') aPos_x--;
        if(step[i] == 'R') aPos_x++;
        if(aPos_x == 1 && aPos_y == 1)
        {
            cout << "yes\n";
            return;
        }
    }
    cout << "no\n";
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        move();
}