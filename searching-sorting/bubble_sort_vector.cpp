
#include <iostream>
#include <vector>

using namespace std;

class test{
    public:
        void bubble(vector<int>& vec){
            for(int i=0; i<vec.size();i++){
                for(int j=0;j<vec.size()-1;j++){
                    if(vec[j]>vec[j+1]){
                        int temp=vec[j];
                        vec[j]=vec[j+1];
                        vec[j+1]=temp;
                    }
                    else{
                        continue;
                    }
                }
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
    obj.bubble(vec);

    return 0;
}
