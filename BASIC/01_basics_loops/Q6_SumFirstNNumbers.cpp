#include <iostream>
using namespace std;
 int main () {
    int n, sum = 0;
    cout << "Get the sum of first N numbers. Where N = " << endl;
    cin >> n;
    for (int i=1; i<=n; i++){
        sum = i + sum;
    }
    cout << "Sum of first " << n << " natural numbers is " << sum << endl;
    return 0;
 }