//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int n, int m, int x)
	{
	    // your code here
	    for(int i=0; i<mat.size(); i++){
	        int start=0, end=m-1;
	        
	        while(start<=end){
	            int mid = start + (end-start)/2;
	            
	            if(mat[i][mid] == x)
	                return 1;
	            else if(mat[i][mid] > x)
	                end = mid-1;
	            else
	                start = mid+1;
	        }
	    }
	    return 0;
	}
};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}
// } Driver Code Ends