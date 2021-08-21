class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        int l = 1;
        int r = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            answer.push_back(l);
            l = l * nums[i]; 
        }
        
        for(int i = nums.size() -1; i > -1; i--)
        {
            answer[i] = (r*answer[i]); 
            r =r * nums[i];             
        }
        return answer;
    }
};
