#include <iostream>
using namespace std;

int main () {
    int x = 5 ;
    cout << "Enter the number of rows: ";
    // cin >> x;
    cout << "The half pyramid is: " << endl;
    int num = 1;
    for(int i=0; i<x; i++){

        for (int j=0; j <= i; j++){
            cout << num;
            num++;
        }
        printf("\n");
        
    }
    

  return 0;
}