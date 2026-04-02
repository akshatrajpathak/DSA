#include<iostream>
using namespace std;

int main(){
    int a[]={10,32,31,4,5,6};
    int size=6;
    int sum=0;
    int prod=1;
    for(int i=0;i<size;++i){
        sum+=a[i];
        prod*=a[i];
    }
    cout<<"Sum : "<<sum<<endl;
    cout<<"product : "<<prod;
}