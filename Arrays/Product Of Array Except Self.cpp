#include<bits/stdc++.h>
using namespace std;

int mod = 100000007;
// Approach - 1
int *getProductArrayExceptSelf(int *arr, int n)
{
    //Write your code here
    int ans[n];
    int m = 0;

    //long long prod = 1;

    for(int i = 0 ; i < n ; i++){
    	long long prod = 1;
    	for(int j = 0 ; j < n ; j++){
    		if(j != i){
    			prod = (prod * arr[j]) % mod;
    		}
    	}
    	ans[m++] = prod;
    }
    for(int i = 0 ; i < n ; i++){
    	arr[i] = ans[i];
    }

    return arr;
}


//Approach - 2




int main(){

#ifndef ONLINE_JUDGE
	freopen("inputf.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int arr[n];

		for(int i = 0 ; i < n ; i++){
			cin >> arr[i];
		}

		int *x = getProductArrayExceptSelf(arr, n);

		for (int i = 0; i < n; ++i)
		{
			/* code */
			cout << x[i] << " ";
		}
		cout << endl;

	}
	
	return 0;
}