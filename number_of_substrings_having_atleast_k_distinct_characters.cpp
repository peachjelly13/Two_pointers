#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int k;
	cin >> k;
	int left = 0;
	int right = 0;
	int count = 0;
	map<char,int>map_;
	while(right<s.size()){
		map_[s[right]]++;
		right++;
		if(map_.size()>=k){
			char pre = s[left];
			map_[pre]--;
			if(map_[pre]==0){
				map_.erase(pre);
			}
			count += s.size()-right+1;
			left++;
		}
	
	}
	cout << count << endl;
}

