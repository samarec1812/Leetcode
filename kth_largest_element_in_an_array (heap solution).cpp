//https://leetcode.com/problems/kth-largest-element-in-an-array
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
    
void Heapsort(vector<int>& a){
Build_Heap(a, a.size()); 
for(size_t i = a.size()- 1; i > 0; i--){
    swap(a[0], a[i]); 
    Heapify(a, i, 0); 
}
}
    int Heap_Extract(vector<int>&a, size_t length){ 
    int max_element = a[0]; 
         
        a[0] = a[length-1]; 
        length--; 
        Heapify(a, length, 0); 
        return a[0]; 
    }
    
    int findKthLargest(vector<int>& nums, int k) {
     Heapsort(nums); 
      for(int i =0; i < k-1; i++){
          nums.erase(nums.begin()+nums.size()-1, nums.end()); 
      }
        return Heap_Extract(nums, nums.size()); 
               
    }
};