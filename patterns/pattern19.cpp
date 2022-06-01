#include <iostream>
using namespace std;

//Day4
//page6



int main(){
	
	int n;
	cin>>n;
	
	int row=1;

  
	

	while(row<=n){
		
		//print space
		
		int space =n-row;
		
		while(space){
			cout<<" ";
			space--;
		}
		
		// print star
		
		int col=1;
		
		while(col<=row){
			cout<<"*";
			col++;
		}
		cout<<endl;
		row++;
}
   
   
}


