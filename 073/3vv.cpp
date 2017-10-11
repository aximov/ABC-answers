#include<bits/stdc++.h>
using namespace std;
set<int> s;
int n,x;
int main() {
	cin>>n;
	while(n--) {
		cin>>x;
		if(s.count(x))
			s.erase(x);
		else
			s.insert(x);
	}
	cout<<s.size()<<endl;
	return 0;
}