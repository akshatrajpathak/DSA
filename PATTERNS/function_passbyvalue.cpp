#include <iostream>
using namespace std;

void changeX(int x){
    x=2*x;
    cout<<"X="<<x<<endl;

}
int main(){
    int x=5;
    changeX(x);

     cout<< " x= "<<x<<endl;
     return 0;
     
}