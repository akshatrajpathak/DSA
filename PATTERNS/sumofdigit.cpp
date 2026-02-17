#include <iostream>
using namespace std;
int sum(int num){
    int digitsum=0;
    while(num>0){
        int lastdig = num%10;
        digitsum+=lastdig;
        num/=10;
    }
    return digitsum;
}
int main(){
    cout<<"sum of digit is : "<<sum(14569)<<endl;
    return 0;
}