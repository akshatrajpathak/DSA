#include <iostream>
using namespace std;
int fact(int n){
    int fact=1;
     for(int i=1;i<=n;i++){
        fact*=i;
     }
     return fact;
}
int binomial(int n, int r){
    
    int x= fact(n);
    int y=fact(r);
    int z=fact(n-r);
    
    int sum=x/(y*z);
    
    return sum;
}

int main(){
    cout<<"Binomial coefficient is : "<<binomial(6,3)<<endl;
    return 0;
}