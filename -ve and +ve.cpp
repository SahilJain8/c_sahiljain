#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.
   vector<int>  ans;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<0){
                ans.push_back(nums[i]);
        }
    }
      for(int i=0;i<nums.size();i++){
        if(nums[i]>=0){
                ans.push_back(nums[i]);}
    }
    
    
    return ans;
}
