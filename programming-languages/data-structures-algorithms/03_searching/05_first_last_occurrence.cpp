#include <iostream>
using namespace std;

int firstOccurrence(int arr[],int n,int key){

    int low=0,high=n-1,ans=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==key){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return ans;
}