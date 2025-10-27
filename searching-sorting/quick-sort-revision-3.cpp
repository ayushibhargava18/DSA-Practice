
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


class test{
    public:
        
        void display(vector<int> vec){
            for(int i=0; i<vec.size();i++){
                cout<<" "<<vec[i];
            }
        }
    
        void quicksort(vector<int>& arr, int p, int q){
        if(p<q){
            int m=partition(arr, p, q);
            quicksort(arr, p, m);
            quicksort(arr, m+1, q);
            }
        }
        
        int partition(vector<int>& vec, int p, int q){
            int x=vec[p];
            int i=p;
            for(int j=p+1; j<=q;j++){
                if(vec[j]<x){
                    i++;
                    int temp=vec[i];
                    vec[i]=vec[j];
                    vec[j]=temp;
                }
            }
            int temp=vec[i];
            vec[i]=vec[p];
            vec[p]=temp;
            
            return i;
        } 

        
};



int main()
{
    vector<int> vec={6, 2, 8, 4 ,1};
    int p=0;
    int r=vec.size()-1;
    test obj;
    obj.quicksort(vec, p, r);
    obj.display(vec);

    return 0;
}
