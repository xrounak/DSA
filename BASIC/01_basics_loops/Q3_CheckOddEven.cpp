#include <iostream>
using namespace std;
 int main () {
    int a;
    cout << "Enter the number to check ";
    cin >> a;
    if (a%2==0){
        cout << a << " is even.";
    }
    else {
        cout << a << " is odd.";
    }

    return 0;
 }