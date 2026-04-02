#include<iostream>
using namespace std;

int main(){
    int a[]={10,32,31,4,5,6};
    int size=6;
    int min=a[0];
    int min_index=0;
    int max=a[0];
    int max_index=0;
    for(int i=0;i<size;++i){
        if (min>a[i]){
            min=a[i];
            min_index=i;

        }
        if (max<a[i]){
            max=a[i];
            max_index=i;
        }
        
    }
    cout<<max_index<<endl;
    cout<<min_index<<endl;
    swap(a[max_index],a[min_index]);
    cout << "array : ";
for (int element : a) {
    cout << element << " ";
}
cout << endl;   
    
}