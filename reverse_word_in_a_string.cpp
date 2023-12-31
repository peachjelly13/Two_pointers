//Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.
//Input: s = "Let's take LeetCode contest"
//Output: "s'teL ekat edoCteeL tsetnoc"

#include<bits/stdc++.h>
using namespace std;
void reverse_word_in_a_string(string &s, int n) { // Pass string by reference using &
    for (int i = 0; i < n; i++) {
        int left = i;
        while (i < n && s[i] != ' ') {
            i++;
        }
        int right = i - 1;
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
    cout << s;
}
int main(){
	string s = "Let's take LeetCode contest";
	int n = s.size();
	reverse_word_in_a_string(s,n);
}
