/*
https://leetcode.com/problems/two-sum/submissions/844671462/

*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0,j=0;
        int n = nums.size();
        int sum = 0;
        unordered_map<int,int> st;
        st[target-nums[0]] = 0;
        for(i=1;i<n;i++)
        {
            if(st.find(nums[i])!=st.end())
            {
                  j = st[nums[i]];
                  break;
            }
            st[target-nums[i]] = i;
        }
        vector<int> ans;
        ans.push_back(j);
        ans.push_back(i);
        return ans;
    }
};