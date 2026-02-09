class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int val:nums){
            ans^=val;
        }
        return ans;
    }
};