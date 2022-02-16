#include<bits/stdc++.h>
using namespace std;


vector<int> Xor(vector<vector<int>> queries){

	vector<int> ans;

	vector<int> Xors(queries.size()+1);

	for(int i = 0 ; i < queries.size() ; i++){
		
		if(queries[i][0] == 1){
			ans.push_back(queries[i][1]);
		}
		else{
			Xors[i] ^= queries[i][1];
			Xors[ans.size()] ^= queries[i][1];
		}
	}


	for(int i = 0 ; i < ans.size() ; i++){
		if(i == 0){
			ans[i] = Xors[i] ^ ans[i];
		}
		else{
			Xors[i] = Xors[i] ^ Xors[i-1];
			ans[i] ^= Xors[i];
		}
	}

	return ans;
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("inputf.txt", "r", stdin);
	freopen("output1.txt", "wr", stdout);
#endif

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		vector<vector<int>> queries;

		for(int i = 0 ; i < n ; i++){
			vector<int> qrr;
			int x, y;
			cin >> x >> y;
			qrr.push_back(x);
			qrr.push_back(y);
			queries.push_back(qrr);
		}

		vector<int> res = Xor(queries);

		for(auto it : res){
			cout << it << " ";
		}
		cout << endl;
	}
	return 0;
}