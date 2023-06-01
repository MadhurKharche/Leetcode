class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int N = arr.size();
        int i=N-1;
        
        for(; i>0; i--){
            if(arr[i-1] < arr[i]){
                break;
            }
        }
        
        if(i==0){
            reverse(arr.begin(), arr.end());
            return;
        }
        
        int index=N-1;
        
        for(int j=N-1 ; j>=i; j--){
            if(arr[j] > arr[i-1]){
                index = j;
                break;
            }
        }
        
        swap(arr[index], arr[i-1]);
        
        int start = i, end = N-1;
        
        while(start<=end){
            swap(arr[start++],arr[end--]);
        }
    }
};