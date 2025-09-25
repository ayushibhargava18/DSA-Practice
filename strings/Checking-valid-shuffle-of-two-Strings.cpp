
#include <iostream>
#include <vector>

using namespace std;

bool validShuffle(string str1, string str2, string shuffle){
    if(shuffle.size()!=(str1.size()+str2.size())){
        return false;
    }
    else{
        for(int i=0; i<shuffle.size(); i++){
            if(str1.find(shuffle[i])==-1 && str2.find(shuffle[i])==-1){
                return false;
            }
        }
    }
    return true;
};

int main()
{
    string str1 = "ABC", str2 = "ZYS", shuffle = "YBAZSC";

    (validShuffle(str1, str2, shuffle) == true)
        ? printf("YES")
        : printf("NO");
    cout << endl;

    return 0;
}
