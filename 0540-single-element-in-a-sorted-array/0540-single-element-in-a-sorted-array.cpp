class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        stack<int>s;
        s.push(nums[0]);
        int num=INT_MIN;
        for(int i=1;i<nums.size();i++){
            if(!s.empty() && s.top()==nums[i]){
                num=s.top();
                s.pop();
            }
            else{
                if(num!=nums[i]){
                    s.push(nums[i]);
                }
            }
        }
        return s.top();
    }
};