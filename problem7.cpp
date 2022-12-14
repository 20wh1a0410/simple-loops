#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	double p;
	float guess;
	cin>>x;
	guess=x/2;
	//t=abs(guess*guess-x);
	p=pow(10,-4);
	while(abs(guess*guess-x)>=p){
		guess=(guess+int(x)/guess)/2.0;
	}
	cout<<guess;
	return 0;
}
