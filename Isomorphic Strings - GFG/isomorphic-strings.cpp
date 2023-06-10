//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s, string t)
    {
        
        // Your code here
        unordered_map<char,char> map;
        unordered_set<char> set;
        
        for(int i=0; i<s.length(); i++){
            if(map.count(s[i]))
                continue;
            else if(set.count(t[i])){
                return false;
            }
            else{
                map[s[i]] = t[i];
                set.insert(t[i]);
            }
                
        }
        
        for(int i=0; i<s.length(); i++){
            s[i] = map[s[i]];
        }
        
        return s==t;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends