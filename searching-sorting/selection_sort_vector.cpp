
#include <iostream>
#include <vector>

using namespace std;

class test{
    public:
        void selection(vector<int>& vec){
            for(int i=0; i<vec.size();i++){
                int min=i;
                for(int j=i+1;j<vec.size();j++){
                    if(vec[j]<vec[min]){
                        min=j;
                    }
                    else{
                        continue;
                    }
                }
                int temp=vec[i];
                vec[i]=vec[min];
                vec[min]=temp;
                
            }
            
            for(int k=0;k<vec.size();k++){
                cout<<" "<<vec[k];
            }
        }
};

int main()
{
    vector<int> vec={13,46,24,52,20,9};
    test obj;
    obj.selection(vec);

    return 0;
}
