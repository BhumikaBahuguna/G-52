class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        heights.push_back(0);
        int maxarea=0;
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && heights[i]<heights[st.top()]){
                int h=heights[st.top()];
                st.pop();
                int right=i;
                int left=st.empty()?-1:st.top();
                int width=right-left-1;
                maxarea=max(maxarea,h*width);
            }
            st.push(i);
        }
        return maxarea;
    }
};
