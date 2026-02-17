#include <iostream>
using namespace std;

// double min(double a, double b){
//     if (a>b){
//         return b;
//     } 
//     else {return a;
// }
// }
// int main(){
//     cout<< "min of two number is : "<<min(10,2.6) << endl;
//     return 0;
// }

int sum(int n){
    int sum=0 ;
    for (int i =1 ; i<=n;i++){
        sum=sum+i;
        
    }
    return sum; 
}
int main(){
    cout<<"sum of n number is"<< sum(10)<<endl;
    return 0;
}