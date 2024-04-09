#include<bits/stdc++.h>
using namespace std;
int main(){
	float bs,gs,hra,da;
	cout<<"\nEnter your salary:";
	cin>>bs;
	if(bs<1500){
		hra=bs*10/100;
		da=bs*90/100;
	}
	else{
		hra=500;
		da=bs*98/100;
	}
	gs=bs+hra+da;
	cout<<"\nBs  :"<<bs;
	cout<<"\ngs  :"<<gs;
	cout<<"\nhra  :"<<hra;
	cout<<"\nda  :"<<da;
	return 0;
}
