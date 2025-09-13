
#include <iostream>
#include <vector>

using namespace std;

class test{
    public:
        void print(vector<int> vec){
            for(int i=0;i<vec.size();i++){
                cout<<vec[i]<<" ";
            }
        }
};

int main()
{
    vector<int> vec = {1,2,3};
    test obj;
    obj.print(vec);

    return 0;
}
