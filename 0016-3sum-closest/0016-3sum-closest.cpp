class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(),nums.end());
        int sumClosest = nums[1]+nums[2]+nums[3];
        for(int i = 0; i < nums.size()-2;i++)
        {
            int l = i + 1;
            int r = nums.size() - 1;
            while(l < r)
            {
                int sum = nums[i]+nums[l]+nums[r];
                if(abs(target - sum) < abs(target - sumClosest))
                {
                    sumClosest = sum;
                }
                if(sum < target)
                {
                    l++;
                }
                else if(sum > target)
                {
                    r--;
                }
                else return sum;
            }

        }
        return sumClosest;
    }
};