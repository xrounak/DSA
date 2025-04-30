#include <iostream>
using namespace std;

long nCr(int n,int r) {

    long num = 1;

    for(int i = 0; i<r; i++){
        num = num*((n-i)/(double)(i+1));
    }
    return num;
}

int main() {
    int x ;
    cout << "ENTER THE ROW NUMBER : ";
    cin >> x;
    for(int r=1; r<=x; r++){
        for(int j=x; j>r; j--){
            cout << " ";
        }
        for(int c = 1; c<=r; c++){
            cout << nCr(r-1,c-1) << "  ";
        }
        cout << "\n";
    }



    return 0;
}