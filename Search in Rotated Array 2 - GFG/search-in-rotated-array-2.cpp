//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Search(int N, vector<int>& A, int key) {
        // Code here
        int start=0, end = N-1;
        
        while(start<=end){
            int mid = start + (end-start)/2;
            
            if(A[mid]==key)
                return true;
            
            if(A[start]==A[mid] && A[mid]==A[end]){
                start++;
                end--;
            }
                
            else if(A[start]<=A[mid]){
                if(A[start]<=key && A[mid]>=key)
                    end = mid-1;
                else
                    start = mid+1;
            }
            else{
                if(A[mid]<=key && A[end]>=key)
                    start = mid+1;
                else
                    end = mid-1;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends