#include <iostream>
using namespace std;

int main () {
    int l, b;
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> l >> b;
    cout << "The rectangle is: " << endl;
    for(int i=0; i<l; i++){
        for(int j=0; j<b; j++){
            cout << " * ";
        }
        cout << "\n";
    }
    



    return 0;
}