#include<iostream>
using namespace std;

void MaxSubArr(int *arr,int n){
    int currsum=0;
    int maxsum=INT8_MIN;

    for (int i = 0; i < n; i++)
    {
        currsum+=arr[i];
        maxsum=max(currsum,maxsum);
        if (currsum<0){
            currsum=0;
        }
    }
    cout<<"Maximum Subarray Sum is :"<<maxsum<<endl;
}

int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    MaxSubArr(arr,n);
    return 0;

    
}