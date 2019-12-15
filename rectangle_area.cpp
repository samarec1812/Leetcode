//https://leetcode.com/problems/rectangle-area
class Solution {
public:
       int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
           int overlap_width = min(C, G) > max(A, E) ? min(C, G) - max(A, E) : 0; 
        int overlap_height = min(D, H) > max(B, F) ? min(D, H) - max(B, F) : 0;
           if((C - A) * (D - B) > 1000000 || (G - E) * (H - F) > 100000)
        return ((C - A) * (D - B)/100000 + (G - E) * (H - F)/100000 - overlap_width * overlap_height/100000)*100000;
           else {
                return (C - A) * (D - B) + (G - E) * (H - F) - overlap_width * overlap_height; 
           }
}
};