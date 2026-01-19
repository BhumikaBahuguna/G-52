class Solution {
public:
    int trap(vector<int>& height) {
        stack<int>st;
        int water=0;
        for(int i=0;i<height.size();i++){
            while(!st.empty() && height[i]>height[st.top()]){
                int bottom=st.top();
                st.pop();
                if(st.empty()) break;
                int left=st.top();
                int width=i-left-1;
                int boundedheight=min(height[left],height[i])-height[bottom];
                water+=width*boundedheight;
            }
            st.push(i);
        }
        return water;
    }
};
/*class Solution {
public:
    int trap(vector<int>& height) {
        int lMax = 0, rMax = 0, total = 0;
        int l = 0, r = height.size() - 1;

        while (l < r) {
            if (height[l] <= height[r]) {
                if (lMax > height[l])
                    total += lMax - height[l];
                else
                    lMax = height[l];
                l++;
            } else {
                if (rMax > height[r])
                    total += rMax - height[r];
                else
                    rMax = height[r];
                r--;
            }
        }
        return total;
    }
};*/
