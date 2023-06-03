//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int s1=0, s2=0, s3=0;
        
        for(int i : S1)
            s1 += i;
        
        for(int i : S2)
            s2 += i;
        
        for(int i : S3)
            s3 += i;
            
        int ans = 0;
        int ctr1=0, ctr2=0, ctr3=0;
        
        while(ctr1<N1 && ctr2<N2 && ctr3<N3){
            if(s1==s2 && s2==s3){
                ans = max(ans, s1);
                break;
            }
            else if(s1>=s2 && s1>=s3){
                s1 -= S1[ctr1++];
            }
            else if(s2>=s1 && s2>=s3){
                s2 -= S2[ctr2++];
            }
            else{
                s3 -= S3[ctr3++];
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends