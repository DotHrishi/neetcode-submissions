class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int> st;
        vector<int> right(n);

        for(int i=n-1;i>=0;i--){
            while(st.size()>0 && heights[st.top()]>=heights[i]){
                st.pop();
            }

            right[i]=st.empty() ? n : st.top();
            st.push(i);
        }

        stack<int> st2;
        vector<int> left(n);

        for(int i=0;i<n;i++){
            while(st2.size()>0 && heights[st2.top()]>=heights[i]){
                st2.pop();
            }

            left[i]=st2.empty() ? -1 : st2.top();
            st2.push(i);
        }

        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans, heights[i]*(right[i]-left[i]-1));
        }

        return ans;
    }
};
