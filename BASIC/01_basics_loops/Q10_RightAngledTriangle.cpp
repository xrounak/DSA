#include <iostream>
using namespace std;

int main () {
    int l;
    cout << "Enter the length of the triangle: ";
    cin >> l;
    cout << "The rectangle is: " << endl;
    for(int i=0; i<=l; i++){
        for(int j=0; j<i; j++){
            cout << " * ";
        }
        cout << "\n";
    }
    



    return 0;
}