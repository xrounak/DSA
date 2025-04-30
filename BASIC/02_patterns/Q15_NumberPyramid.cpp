#include <iostream>
using namespace std;

int main() {
    int x ;
    cout << "ENTER THE ROW NUMBER : ";
    cin >> x;
    for(int r=1; r<=x; r++){
        for(int j=x; j>r; j--){
            cout << " ";
        }
        for(int c = 1; c<=r; c++){
            cout << c << "  ";
        }
        cout << "\n";
    }
}