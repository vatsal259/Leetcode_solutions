class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=accumulate(nums.begin(), nums.end(), 0);
        int tsum=nums.size()*(nums.size()+1)/2;
        sort(nums.begin(), nums.end());
        if(nums[0]!=0)
        {
            return 0;   
        }
        else if(tsum==sum)
        {
            return nums.size();
        }
        else
        {
            return (tsum-sum);
        } 
    }
};
