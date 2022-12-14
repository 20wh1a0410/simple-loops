#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int cc=0,vc=0,i;
	cin>>s;
	for(i=0;i<s.length();i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') vc++;
		else cc++;
	}
	cout<<"vowel count is"<<vc<<"\n"<<"consonant count is"<<cc;
	return 0;
}
