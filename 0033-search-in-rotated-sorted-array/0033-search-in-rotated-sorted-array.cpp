class Solution {
public:
    int binarySearch(vector<int> &n, int target, int mp){
        cout<<"hit bS"<<endl;
        int low, high, mid;
        if(target >= n[0]){
            low = 0; high = mp;
        } else{
            low= mp; high = n.size()-1;
        }
        int res=-1;
        while(low<= high){
            mid = (low + high)/2;
            if(target== n[mid]){
                return mid;
            }else if( target< n[mid]){
                high = mid-1;
            }
            else {
                low = mid +1;
            }
        }
        return res;
    }
    int search(vector<int>& n, int target) {
        int low = 0, high = n.size()-1, mid;
        int mp=high, res =-1, flag=1;
        if(n[low]> n[high]){
          cout<<"find mp"<<endl;
            while(low<=high){
                if(!flag)break;
                mid= (low + high)/2;
                if((low== high-1) && n[low]> n[high]){
                    mp= high;
                    flag= 0;
                    break ;
                }else if(n[low] < n[mid]){
                    low = mid;
                }
                else{
                    high = mid;
                }
            }  
        }
        cout<< mp<<endl;
        
        res = binarySearch(n, target , mp);
        return res;
    }
};