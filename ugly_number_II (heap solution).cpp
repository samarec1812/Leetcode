//https://leetcode.com/problems/ugly-number-ii
class Solution {
public:
    void siftDown(vector<long long>& heap, long long i){
        while( 2* i +1 < heap.size()){
            int left = 2*i +1; 
            int right = 2*i +2; 
            int k = left;
            if(right < heap.size() && heap[right]< heap[k]){
                k = right; 
            }
            if(heap[i] <= heap[k]) break; 
            swap(heap[i], heap[k]); 
            i = k; 
        }
    }
    
    void SiftUp(vector<long long>& heap, long long index){
        long long med = (index-1)/2; 
        while(index > 0 && heap[index] < heap[med]){
            swap(heap[index], heap[med]); 
            index = med; 
            med = (index -1 )/2;
        }
    }
    
    int extractMin(vector<long long>& heap){
        long long min = heap[0]; 
        swap(heap[0], heap[heap.size()-1]); 
        heap.erase(heap.begin()+heap.size()-1); 
        siftDown(heap, 0); 
        return min; 
    }
    void Insert(vector<long long>& heap, long long x){
        heap.push_back(x); 
        SiftUp(heap, heap.size()-1); 
    }
    
    int nthUglyNumber(int n) {
     vector<long long> nums = {1}; 
        unordered_set<long long>s; 
        s.insert(1); 
        vector<long long> triple = {2,3,5}; 
        long long min = 0; 
        while(n > 0){
            min = extractMin(nums); 
            for(auto w : triple){
                if(s.find(min*w) == s.end()){
                    Insert(nums, min*w); 
                    s.insert(min*w); 
                }
            }
            n--; 
        }
        return min; 
    }
};