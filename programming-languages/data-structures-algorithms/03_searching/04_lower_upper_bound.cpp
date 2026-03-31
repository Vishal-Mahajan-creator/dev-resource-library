#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int arr[]={1,2,2,2,3,4};

    int n=6;

    cout<<lower_bound(arr,arr+n,2)-arr<<endl;
    cout<<upper_bound(arr,arr+n,2)-arr;
}