#include<bits/stdc++.h>
using namespace std;

bool ispar(string x){

    int low = 0;
    int high = x.size() - 1;

    while(low < high){
        //cout << int(x[low]) << " " << int(x[high]) << endl;
        if(x[low] == '(' && x[high] != ')'){
            return false;
        }
        if(x[low] == '{' && x[high] != '}'){
            return false;
        }
        if(x[low] == '[' && x[high] != ']'){
            return false;
        }
        //cout << x[low] << " " << x[high];
        low++;
        high--;
    }
    return true;
}
int main(){

    string str;
    cin >> str;

    cout << ispar(str);

    return 0;
}