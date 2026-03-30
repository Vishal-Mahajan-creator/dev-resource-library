#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){

    for(int i=0;i<n;i++)
        if(arr[i]==key)
            return i;

    return -1;
}

int main(){

    int arr[] = {5,3,8,2};
    int n = 4;

    cout << linearSearch(arr,n,8);
}