
#include <iostream>
#include <vector>
using namespace std;

class test{
    public:
        void insertion(vector<int>& vec){
            for(int i=0; i<vec.size(); i++){
                int key=vec[i];
                int j=i-1;
                while(j>=0 && vec[j]>key){
                    vec[j+1] = vec[j];
                    j--;
                }
                vec[j+1]=key;
            }
        }
        
        void display(vector<int> vec){
            for(int i=0; i<vec.size(); i++){
                cout<<vec[i]<< " ";
            }
        }
};



int main()
{
    test obj;
    vector<int> vec={3, 6, 2, 8, 1};
    obj.insertion(vec);
    obj.display(vec);

    return 0;
}
