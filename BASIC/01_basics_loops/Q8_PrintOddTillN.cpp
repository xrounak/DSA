#include <iostream>
using namespace std;
 int main () {
    int n;
    cout << "Enter the number to print odd numbers from 1 to N: ";
    cin >> n;
    for (int i=1; i<=n; i=i+2){
        cout << i << endl;
    }
    return 0;
 }