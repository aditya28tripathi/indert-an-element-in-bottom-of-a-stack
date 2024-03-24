class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        stack<int> sa;
        
        
        while(!st.empty())
        {
            sa.push(st.top());
            
            
            st.pop();
        }
        
        st.push(x);
        
        while(!sa.empty())
        
        {
            st.push(sa.top());
            
            sa.pop();
            
        }
        
        return st;
    }
};
