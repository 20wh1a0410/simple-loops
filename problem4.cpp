#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	for(i=1;i<=100;i++){
		if(i%15==0){
		cout<<"FIZZ BUZZ"<<"\n";
	}
	else if(i%5==0){
		cout<<"BUZZ"<<"\n";
	}
	else if(i%3==0){
		cout<<"FIZZ"<<"\n";
	}
	else
	cout<<i<<"\n";
	}
	return 0;
}
