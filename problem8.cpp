#include<iostream>
using namespace std;
int main(){
	int c,f;
	cout<<"celcius"<<"\t"<<"farenheit"<<"\n";
	for(c=0;c<=100;c++){
		if(c%10==0){
		f = (c * 9/5) + 32;
		cout<<c<<"\t"<<f<<"\t"<<"\n";
	}
	}
	return 0;
}
