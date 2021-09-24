class Solution {
public:
    void reverseString(vector<char>& A) {
        stack<char> stack;
        for(int i=0;i<A.size();i++){
            stack.push(A[i]);
        }
        for(int i=0;i<A.size();i++){
            A[i]=stack.top();
            stack.pop();
        }
    }
};
