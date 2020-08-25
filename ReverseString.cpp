class Solution {
public:
    // 344. Reverse String
    
    // Using loop O(1)
    void reverseString(vector<char>& s) {
        for(int i=0 ; i<s.size()/2 ; i++)
        {
            char temp = s[i];
            s[i] = s[s.size() - i - 1];
            s[s.size() - i - 1] = temp;
        }
    }
    
    // Using recursion O(n)
    
    void helper(vector<char>& s, int left, int right){
        if(left < right)
        {
            char tmp = s[left];
            s[left++] = s[right];
            s[right--] = tmp;
            
            helper(s, left, right);
        }
    }
    
    void reverseString(vector<char>& s){
        helper(s, 0, s.size() - 1);
    }
    
};
