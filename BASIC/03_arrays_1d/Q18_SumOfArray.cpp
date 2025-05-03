#include <iostream>
using namespace std;

int sumOfArray(int arr[], int n){
    int sum = 0;

    for(int i=0; i<n; i++){
        sum = sum+arr[i];
    }

    return sum;
}

int main() {
    int n=7;
    int array[n] = {45,55,23,54,54,21,2};

    cout << sumOfArray(array,n);

    return 0;
}