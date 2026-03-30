#include <iostream>
using namespace std;

int main(){

    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n=9;

    int maxSum=arr[0];
    int currentSum=0;

    for(int i=0;i<n;i++){

        currentSum += arr[i];

        maxSum = max(maxSum,currentSum);

        if(currentSum<0)
            currentSum=0;
    }

    cout<<maxSum;
}