#include<iostream>
using namespace std;

int main(){
    int a[]={10,32,31,4,5,6};
    int size=6;
    int smallest=a[0];
    int largest=a[0];
    int small_i=0;
    int big_i=0;
    for(int i=0;i<size;++i){
        if(a[i]<smallest){
            smallest=a[i];
           small_i=i;
        }
        if(a[i]>largest){
            largest=a[i];
            big_i=i;
        }
    }
    cout<<"smallest : "<<small_i<<endl;
    cout<<"largest : "<<big_i;
}