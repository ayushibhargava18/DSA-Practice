
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class test{
    public:
        void merge(vector<int>& vec, int p, int q, int r){
            int n1=q-p+1;
            int n2=r-q;
            
            vector<int> L(n1+1);
            vector<int> R(n2+1);
            
            for(int i=0; i<n1; i++){
                L[i]=vec[i+p];
            }
            for(int j=0; j<n2; j++){
                R[j]=vec[j+q+1];
            }
            
            L[n1]=INT_MAX;
            R[n2]=INT_MAX;
            
            int i=0;
            int j=0;
            
            for(int k=p; k<=r; k++){
                if(L[i]<R[j]){
                    vec[k]=L[i];
                    i++;
                }
                else{
                    vec[k]=R[j];
                    j++;
                }
            }
            
        }
        
        void mergesort(vector<int>& vec, int p, int r){
            if(p<r){
                int q=(p+r)/2;
                mergesort(vec, p, q);
                mergesort(vec, q+1, r);
                merge(vec, p, q, r);
            }
        }
        void display(vector<int> vec){
            for(int i=0; i<vec.size();i++){
                cout<<" "<<vec[i];
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
