#include <iostream>
using namespace std;

int main() {
    int r, h, c, s;
    cout << "-----Enter the number-----\n";
    cin >> h;
    for(r = 1; r <= h - 1; r++) {
       
        for(c = 1; c<= r; c++)
            cout << "*";
        for(s = 1; s <= 2 * (h - r); s++)
            cout << " ";
        for(c = r; c >= 1; c--)
            cout << "*";
        putchar('\n');
    }

    for(r = h; r >= 1; r--) {
       
        for(c = 1; c <= r; c++)
            cout << "*";
        for(s = 1; s <= 2 * (h - r); s++)
            cout << " ";
         for(c = r; c >= 1; c--)
            cout << "*";
        putchar('\n');
    }
    
    return 0;
}


 