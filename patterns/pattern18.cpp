#include <iostream>
using namespace std;

//Day4
//page6



int main(){
	
	int n;
	cin>>n;
	
	int i=1;

  
	

	while(i<=n){
		
		int j=1;

		char ch='D'+1-i;
	   
		while(j<=i){
			
			
			cout<<ch;    
		    ch=ch+1;
			j++;
		}
			
		cout<<endl;
		i++;
	}
	
   
   
}


