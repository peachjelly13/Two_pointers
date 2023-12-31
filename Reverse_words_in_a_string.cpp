//Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

 

//Example 1:

//Input: s = "Let's take LeetCode contest"
//Output: "s'teL ekat edoCteeL tsetnoc"


class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int left = 0;
        int right = 0;
        while(i<=s.size()){
            left = i;
            while(s[i]!=' ' && i<s.size()){
                i++;
            }
            right = i-1;
            while(left<right){
                char t = s[left];
                s[left] = s[right];
                s[right] = t;
                left++;
                right--;
            }
            i++;
        }
        return s;
    }
};
