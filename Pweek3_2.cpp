#include <iostream>
using namespace std;

int main() {
    int r, h, c;
    cout << "-----Enter the number-----\n";
    cin >> h;
    for(r = 1; r <= h - 1; r++) {
       
        for(c = 1; c<= r; c++)
            cout << "*";
        
        putchar('\n');
    }

    
    return 0;
}


 