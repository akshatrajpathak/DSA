#include <iostream>
using namespace  std;
  
int checkprime(int n){
    for (int i=2;i<n;i++){
        if (n%i==0){
            cout<<"it is not prime number";
            break;
        }
        else {
            cout<<"it is prime number";
            break;

        }

    }
    
}
int main(){
    int n=4;
    checkprime(n);
    return 0;
}
