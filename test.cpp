#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b;cin >> a >> b;
	if(a <= b || b - a == 1){
		cout << "-1" << endl;
		return;
	}
	if(a >= 2*b){
		cout << b << endl;
	}else{
		cout << ceil(a/b) << endl;
	}
	
}

int main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
	int t=1;
	cin >>t;
	while(t--)solve();
	return 0;
}