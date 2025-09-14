
#include<iostream>
#include<vector>

using namespace std;

class test {
public:
	void quick(vector<int>& vec, int p,int q) {
		if(p<q) {
			int m=partition(vec, p, q);
			quick(vec, p,m);
			quick(vec, m+1, q);
		}
	}

	int partition(vector<int>& vec, int p, int q) {
		int x=vec[p];
		int i=p;
		for(int j=p+1; j<=q; j++) {
			if(vec[j]<x) {
			    i=i+1;
			    int temp=vec[i];
			    vec[i]=vec[j];
			    vec[j]=temp;
			}
		}
		int temp=vec[i];
	    vec[i]=vec[p];
		vec[p]=temp;
		return i;
	}

	void display(vector<int> vec) {
		for(int i=0; i<vec.size(); i++) {
			cout<<" "<<vec[i];
		}
	}

};

int main()
{
	vector<int> vec={4,1,7,9,3};
	test obj;
	int p=0;
	int r=vec.size()-1;
	obj.quick(vec, p, r);
	obj.display(vec);
	return 0;
}
