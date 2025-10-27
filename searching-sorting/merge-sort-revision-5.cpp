
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


class test{
    public:
        void merge(vector<int>& arr, int p, int q, int r){
    
    int n1=q-p+1;
    int n2=r-q;
    
    vector<int> L(n1+1);
    vector<int> R(n2+1);
    
    for(int i=0; i<n1; i++){
        L[i]=arr[i+p];
    }
    
    for(int j=0; j<n2; j ++){
        R[j]=arr[q+j+1];
    }
    
    L[n1]=INT_MAX;
    R[n2]=INT_MAX;
    
    int i=0;
    int j=0;
    
    for(int k=p; k<=r; k++){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
    }
        }
    void display(vector<int> vec){
        for(int i=0; i<vec.size();i++){
            cout<<" "<<vec[i];
        }
    }
    
    void mergesort(vector<int>& arr, int p, int r){
    if(p<r){
        int q=(p+r)/2;
        mergesort(arr, p, q);
        mergesort(arr, q+1, r);
        merge(arr, p, q, r);
    }
}
    

        
};



int main()
{
    vector<int> vec={6, 2, 8, 4 ,1};
    int p=0;
    int r=vec.size()-1;
    test obj;
    obj.mergesort(vec, p, r);
    obj.display(vec);

    return 0;
}
