#include <iostream>
using namespace std;   

int findMin(int arr[], int n){

    int min = arr[0];

    for(int i=0; i<n; i++){
        if(min>arr[i]){min = arr[i];}
    }

    return min;
}

int main() {

    int garr[5]={32,1,32,65,32};
    // printarray(garr,5);
    cout << "Min number is " << findMin(garr,5);

    return 0;
}