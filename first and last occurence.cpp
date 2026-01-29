class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int low=0;
        int high=arr.size()-1;
        int ans=-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(arr[mid]==x){
                ans=mid;
                if(first)
                    high=mid-1;
                else
                    low=mid+1;
            }
            
            else if(arr[mid]<x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            return ans;
        }
        
        vector<int>firstAndLast(int x,vector<int> &arr){
            int f=findpos(x,arr,true);
            
            if(f==-1)
                return{-1};
            
            int l=findpos(x,arr,false);
            if(l==-1)
                return{f,l};
        }
    }
};