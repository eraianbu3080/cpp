#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cout<<"\nEnter the month:";
	cin>>m;
	switch(m){
		case 1:
			cout<<"january";
			break;
			case 2:
			cout<<"feb";
			break;
			case 3:
			cout<<"mar";
			break;
			case 4:
			cout<<"apr";
			break;
			case 5:
			cout<<"may";
			break;
			default:
				cout<<"invalid"<<endl;
				break;	
	}
	return 0;
}
