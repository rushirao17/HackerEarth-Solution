#include <bits/stdc++.h>
using namespace std;
class Solution{
	public:
	int catchThief(vector<vector<char>>&mat, int k, int n){
		int res = 0;
		for(int rows = 0; rows < n; rows++){
			for(int cols = 0; cols < n; cols++){
				if(mat[rows][cols] == 'T'){
					res += helper(mat[rows], k, n, cols);
				}
			}
		}
		return res;
	}
	int helper(vector<char>&mat, int k, int n, int cols){
		bool caught = false;
		int left,right;                
		left = cols - k >= 0 ? cols - k : 0;
		int t = (cols + k) < n ? cols + k : n-1;
        right = cols+1;                      
		while((left < cols) && !caught){                   //Give priority from left to right
            if(left < cols and mat[left] == 'P'){
				mat[left] = 'K';
				caught = !caught;
			}
			++left;
		} 
		while((right <= t) && !caught){
			if(right <= t and mat[right] == 'P'){
				mat[right] = 'K';
				caught = !caught;
			}
			++right;
		} 
		if(caught){
			mat[cols] = 'C'; // just to check the working of the code not needed
			return 1;
		}
		return 0;
	}
};
int main() {
	Solution obj;
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<vector<char>>mat(n, vector<char>(n));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin>>mat[i][j];
			}
		}
		cout<<obj.catchThief(mat, k, n)<<"\n";
	}
	return 0;
}
