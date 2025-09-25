
#include <iostream>
#include <vector>
using namespace std;

class test{
    public:
        void selection(vector<int>& vec){
            for(int i=0; i<vec.size()-1; i++){
                int mini=i;
                for(int j=i+1; j<vec.size(); j++){
                    if(vec[j]< vec[mini]){
                        mini=j;
                    }
                }
                swap(vec[mini], vec[i]);
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
    obj.selection(vec);
    obj.display(vec);

    return 0;
}
