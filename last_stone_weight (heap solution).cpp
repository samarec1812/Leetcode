//https://leetcode.com/problems/last-stone-weight
class Solution {
public:
      void Heapify(vector<int>&a, size_t length, size_t i){
      size_t left = 2*i +1; 
      size_t right = 2*i + 2; 
      size_t largest = i; 
      if(left < length && a[left] > a[largest]) largest = left; 
      if(right < length && a[right] > a[largest]) largest = right; 
      if(largest != i)
      {
       swap(a[i], a[largest]); 
       Heapify(a, length, largest); 
      }
       
  }
    void Build_Heap(vector<int>& a, size_t length){
        for(size_t i = length /2 -1; i != (size_t)(-1); i--)
            Heapify(a, length, i); 
    }
    
void Heapsort(vector<int>&a){
Build_Heap(a, a.size()); 
for(size_t i = a.size()- 1; i > 0; i--){
    swap(a[0], a[i]); 
    Heapify(a, i, 0); 
}
}
    int Heap_Extract(vector<int>a, size_t length){ 
    int max_element = a[0]; 
        a[0] = a[length-1]; 
        length--; 
        Heapify(a, length, 0); 
        return a[0]; 
    }
    int Maximum(vector<int> nums){
     while(nums.size()> 1){
          Heapsort(nums); 
          if(nums.size() == 2 && nums[0] != nums[1]){
             nums[0] = abs(nums[1]- nums[0]); 
              nums.pop_back(); 
                   } 
        else  if(nums.size() == 2 && nums[0] == nums[1]){
            nums[0] = 0; 
              nums.pop_back(); 
             
           // break; 
         } 
         
         else if( Heap_Extract(nums, nums.size()) == Heap_Extract(nums, nums.size()-1)){
             nums.pop_back(); 
             nums.pop_back(); 
         }
          
         else if(  Heap_Extract(nums, nums.size()) != Heap_Extract(nums, nums.size()-1)){
             nums[nums.size()-2] = abs(Heap_Extract(nums, nums.size()) - Heap_Extract(nums, nums.size()-1)); 
             nums.pop_back(); 
         }
     }
        return nums[0]; 
    }
    
    int lastStoneWeight(vector<int>& stones) {
        return Maximum(stones); 
    }
};