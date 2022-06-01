#include <iostream>
using namespace std;

//Day4
//page6

/*

4
1
23
345
4567

*/

int main(){
	
	int n;
	cin>>n;
	
	int i=1;

	
	while(i<=n){
		
		int j=1;
	   
		while(j<=i){
			
			cout<<i+j-1;
		
			j++;
		}
			
		cout<<endl;
		i++;
	}
	
   
   
}


