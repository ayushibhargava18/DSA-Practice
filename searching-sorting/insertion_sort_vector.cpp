
#include <iostream>
#include <vector>

using namespace std;

class test{
    public:
        void bubble(vector<int>& vec){
            for(int i=0; i<vec.size();i++){
                int key=vec[i];
                int j=i-1;
                
                while(j>=0 && vec[j]>key){
                    vec[j+1]=vec[j];
                    j=j-1;
                }
                vec[j+1]=key;
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
