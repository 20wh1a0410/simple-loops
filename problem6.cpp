#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string msg,res="";
	int shift,pos;
	cin>>msg>>shift;
	for(int i=0;i<msg.length();i++)
	{if(msg[i]>='a'&&msg[i]<='z'){
		pos=int(msg[i])-'a';
		pos=(pos+shift)%26;
		res+=char('a'+pos);
	}
	else if(msg[i]>='A'&&msg[i]<='Z'){
		pos=int(msg[i])-'A';
		pos=(pos+shift)%26;
		res+=char('A'+pos);
	}
	else
	res+=msg[i];
	}
	cout<<res;
	return 0;
} 
