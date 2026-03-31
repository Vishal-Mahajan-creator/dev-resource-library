#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){

    for(int i=0;i<n;i++){
        if(arr[i]==key)
            return i;
    }

    return -1;
}

int main(){

    int arr[]={10,20,30,40};
    int n=4;

    cout<<linearSearch(arr,n,30);
}