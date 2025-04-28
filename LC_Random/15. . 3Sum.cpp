class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;

        int n = nums.size();
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                for(int k = j + 1; k < n; k++) {
                    if(nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        ans.push_back(temp);
                    }
                }
            }
        }

        return ans;
    }
};

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<int> ans;
//         for(int i=0; i<nums.size(); i++)
//         {
//              for(int j=i+1; i<nums.size(); j++)
//              {
//                 for(int k=j+1; k<nums.size(); k++)
//                 {
//                     if (nums[i]+nums[j]+nums[k]==0)
//                     {
//                         vector<int> temp;
//                         temp.push_back(nums[i]);
//                         temp.push_back(nums[j]);
//                         temp.push_back(nums[k]);
//                         ans.push_back(temp);
//                     }
//                 }




//              }
//         }
//        return ans; 
//     }
    
// };
