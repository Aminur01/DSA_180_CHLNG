#include <iostream>
using namespace std;

//Day4
//page6



int main(){
	
	int n;
	cin>>n;
	
	int row=1;

  
	

	while(row<=n){
		
		//print star
		
		int star =n-row+1;
		
		while(star){
			cout<<"*";
			star--;
			
		}
		cout<<endl;
		row++;
	}
		
		
   
   
}


