class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        vector<int> pos, neg;
				int n = arr.size();

	    for(int i=0; i<n; i++){
	        if(arr[i] >= 0)
	            pos.push_back(arr[i]);
	        else
	            neg.push_back(arr[i]);
	    }

	    int ctr=0;
			int index=0;
	    
	    while(ctr<n){
	        arr[ctr++] = pos[index];
	        arr[ctr++] = neg[index++];
	    }

        return arr;
    }
};