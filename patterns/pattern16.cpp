#include <iostream>
using namespace std;

//Day4
//page6



int main(){
	
	int n;
	cin>>n;
	
	int i=1;

  
	char ch ='A';
	int count=1; 
	while(i<=n){
		
		int j=1;

		
	   
		while(j<=i){
			
			ch='A'+count-1;
			cout<<ch;    
			count++;
			j++;
		}
			
		cout<<endl;
		i++;
	}
	
   
   
}


