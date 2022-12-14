#include<iostream>
#include<sstream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int q,r,i;
	string result="";
	cin>>q;
	while(q>0){
		r=q%2;
		result+=to_string(r);
		q=q/2;
	}
	for(i = result.length() - 1; i >= 0; i--)
    {
      	cout<<result[i];
    }
	return 0;
}
