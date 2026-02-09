#include <iostream>
using namespace std;

int main (){
    int n=4;
    for(int i=0;i<n;i++){
        char a='A';
        for(int j=0;j<n;j++){
            
            cout<<a;
            a=a+1 ;
        }
        cout<<endl;
    }
    return 0;

}
/*
git add .
git commit -m "Day X solved patterns"
git push
*/