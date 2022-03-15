#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {

    int i = 0, j = 0;
    int k = 0;
    while( i<n && j<m) {
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }

    //copy first array ke element ko
    while(i<n) {
        arr3[k++] = arr1[i++];
    }

    //copy kardo second array ke remaining element ko
    while(j<m) {
        arr3[k++] = arr2[j++];
    }
}

void print(int ans[], int n) {
    for(int i=0; i<n; i++) {
        cout<< ans[i] <<" ";
    }
    cout << endl;
}

int main() {

    int arr1[4] = {10,11,23,42};
    int arr2[6] = {1,2,33,44,54,60};

    int arr3[10] = {};

    merge(arr1, 4, arr2, 6, arr3);

    print(arr3, 10);


    return 0;
}