
#include <iostream>
#include <vector>

using namespace std;

class test{
    public:
        void binary(vector<int> vec, int x){
            int l=0;
            int r=vec.size()-1;
            
            while(l<=r){
                int mid=(l+r)/2;
                if(x==vec[mid]){
                    cout<<"index "<<mid;
                    cout<<"array position "<<mid+1;
                    return;
                }
                if(x<vec[mid]){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            cout<<"element not found";
        }
};

int main()
{
    vector<int> vec = {3, 4, 6, 7, 9, 12, 16, 17};
    int x=6;
    test obj;
    obj.binary(vec, x);

    return 0;
}
