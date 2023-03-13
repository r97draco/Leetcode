class Solution {
public:
    void sortColors(vector<int>& arr) {
        int sz= arr.size();
       int i = 0, j = sz- 1;
        for(int k=0; k<=j; )
        {
        	if(arr[k]==0)  swap(arr[i++], arr[k++]);
        	else if(arr[k]==2)  swap(arr[j--], arr[k]);
        	else k++;
        }        
        

    }
};