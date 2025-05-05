#include <iostream>
using namespace std;

void printarray(int arr[], int n){

    for(int i = 0; i<n; i++){
        int x = arr[i];
        cout << x << " ";
    }

    cout << endl;
}

//This function stores reversed array in a new array.
void revrse(int arr[], int n){
    int revArr[n];

    for(int i=0; i<n; i++){
        revArr[n-i-1]=arr[i];
    }
    printarray(revArr,n);

}


// This function revrses the existing array.
void revrse2(int arr[], int n){
    for(int i=0; i<n-1; i++){
        arr[i] = arr[i]+arr[n-1-i];
        arr[n-1-i] = arr[i] - arr[n-1-i];
        arr[i] = arr[i]-arr[n-1-i];
    }
}

int main() {
    int n=7;
    int array[n] = {45,55,23,54,54,21,2};
    printarray(array,n);
    revrse2(array,n);
    printarray(array,n);
    
    return 0;
}