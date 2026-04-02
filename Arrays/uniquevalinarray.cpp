#include<iostream>
using namespace std;

int main(){
    int a[]={1,3,1,2,3,6};
    int size=6;
    
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count == 1) {
            cout << a[i] << " ";
        }
    }
    return 0;
}   