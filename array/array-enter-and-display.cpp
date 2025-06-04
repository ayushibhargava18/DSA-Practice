#include <iostream>
using namespace std;

int main(){
    int a[5];
    cout<< "enter array elements";
    for(int i=0; i<5; i++){
        
        cin>>a[i];
    }
    
    cout<< "elements in array are";
    for(int i=0;i<5;i++){
        cout<<"\n" a[i];
    }
    return 0;
}
