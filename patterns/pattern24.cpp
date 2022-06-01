#include <iostream>
using namespace std;

//Day4
//page6



int main(){
	
	int n;
	cin>>n;
	
	int row=1;

  
	
    
	while(row<=n){
		
		int col=1;
		
		int space=row-1;
		
		while(space){
			cout<<" ";
			space--;
			col++;
			
		}
		
		
		
		
		while(col<=n){
			cout<<col;
			col++;
			
		}
		
	
		
		
		
		
		
		cout<<endl;
		row++;
	}
		
		
   
   
}


