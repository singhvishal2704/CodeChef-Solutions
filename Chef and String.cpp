#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	int t; cin >> t;
	while(t--){
		vector <pair <char, char> > v;
		string str;
		cin >> str;

		for(int i=0 ;i < str.size(); i++){
			if(str[i] == 'x'){
				if(str[i+1] == 'y'){
					v.push_back(make_pair(str[i], str[i+1]));
					i++;
				}
			}
			else if(str[i] == 'y'){
				if(str[i+1] == 'x'){
					v.push_back(make_pair(str[i], str[i+1]));
					i++;
				}
			}
		}

		cout << v.size() << "\n";

	}
}