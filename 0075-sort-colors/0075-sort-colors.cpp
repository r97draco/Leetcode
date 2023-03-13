class Solution {
public:
    void sortColors(vector<int>& arr) {
        int sz= arr.size();
        for(int i=0; i< sz; i++ ){
            for(int j= i+1; j< sz; j++){
                if(arr[i]> arr[j])
                    swap(arr[i], arr[j]);
            }
        }
    }
};