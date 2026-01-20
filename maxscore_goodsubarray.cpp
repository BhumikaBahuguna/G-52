class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n=nums.size();
        int left=k;
        int right=k;
        int minval=nums[k];
        int ans=minval;
        while(left>0 || right<n-1){
            if(left==0)
                right++;
            else if(right==n-1)
                left--;
            else if(nums[left-1]<nums[right+1])
                right++;
            else
                left--;
            minval=min(minval,min(nums[left],nums[right]));
            ans=max(ans,minval*(right-left+1));
        }
    return ans;
    }
};
