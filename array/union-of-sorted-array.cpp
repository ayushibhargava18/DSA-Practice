class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        int i=0; 
        int j=0;
        
        vector<int> result;
        
        while (i<a.size() && j<b.size()){
            if(a[i]<b[j]){
                result.push_back(a[i]);
                i++;
            }
            else if(a[i]>b[j]){
                result.push_back(b[j]);
                j++;
            }
            else{
                result.push_back(a[i]);
                i++;
                j++;
            }
        }
        while(i<a.size()){
            result.push_back(a[i]);
            i++;
        }
        while(j<b.size()){
            result.push_back(b[j]);
            j++;
        }
        
        
        
        return result;
        
        // return vector with correct order of elements
    }
};
