#include <iostream>
using namespace std;

/*

R=C=10
**********
**********
**********
**********
**********
**********
**********
**********
**********
**********

*/

int main(){
	
	int n;
	
	cout<<"R=C=",
	cin>>n;
	
	int i=1;
	
	while(i<=n){
		
		int j=1;
		
		while(j<=n){
			cout<<"*";
			j++;
		}
		cout<<"\n";
		i++;
	}
}


