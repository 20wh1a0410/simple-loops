#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0,rem;
	cin>>n;
	do{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}while(n!=0);
	cout<<sum;
	return 0;
}
