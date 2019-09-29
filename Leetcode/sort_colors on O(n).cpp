//https://leetcode.com/problems/sort-colors
class Solution {
public:
    
    void sortColors(vector<int>& nums) {
    // vector<int>num; 
      int a = count(nums.begin(), nums.end(), 0);
    int b = count(nums.begin(), nums.end(), 1);
    int c = count(nums.begin(), nums.end(), 2);
   int k=0;
    for(int i =0; i < nums.size(); i++){

        if(i < a) {nums[i] =0;  }
        else if(k != b){ k++; nums[i]=1;  }

    else nums[i]=2;
    }
        
    }
};