#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,odd_sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==1){
		odd_sum+=i;
	}
	}
	cout<<odd_sum;
	return 0;
}
