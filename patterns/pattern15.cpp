#include <iostream>
using namespace std;

//Day4
//page6



int main(){
	
	int n;
	cin>>n;
	
	int i=1;

  
	char ch ='A';
	while(i<=n){
		
		int j=1;

		
	   
		while(j<=i){
			
			ch='A'+i-1;
			cout<<ch;
		    
			
			j++;
		}
			
		cout<<endl;
		i++;
	}
	
   
   
}


