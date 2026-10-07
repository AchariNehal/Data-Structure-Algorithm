class Solution {
public:
    int trap(vector<int>& height) {
      int L = 0;
      int R = height.size()-1;
      int maxLeft=0;
      int maxRight=0;
      int water=0;
      while(L < R){
        maxLeft=max(maxLeft,height[L]);
        maxRight=max(maxRight,height[R]);
         if(height[L] < height[R]){
            L++;
             if(maxLeft <=height[L]){
            maxLeft=height[L];
            }else{
                water += min(maxLeft,maxRight)- height[L];
            }
        }else{
            R--;
             if(maxRight <=height[R]){
            maxRight=height[R];
            }else{
                water += min(maxLeft,maxRight)- height[R];
            }
        }
      }
      return water;
    }
};