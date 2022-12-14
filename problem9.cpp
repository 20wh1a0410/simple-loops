#include<iostream>
#include<sstream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int sum=0,n,ans=1;
	string s;
	cin>>s;
	for(int i = s.length() - 1; i >= 0; i--)
    {
    	if(s[i]=='1')
    sum+=ans;	
    ans*=2;
	}
	cout<<sum;
	return 0;
}
