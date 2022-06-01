#include <iostream>
using namespace std;

//Day4
//page6



int main(){
	
	int n;
	cin>>n;
	
	int row=1;

  
	int count=1;
    
	while(row<=n){
		
	  //1st triangle
	  int space=n-row;
	  while(space){
	  	
	  	cout<<" ";
	  	space--;
	  }
	  
	  //2nd triangle
	  int count=1;
	  while(count<=row){
	  	cout<<count;
	  	count++;
	  }
	  
	  //3rd triangle
	  
	  int start=row-1;
	  
	  while(start){
	  	
	  	cout<<start;
	  	start--;
	  	
	  }
	  
	  
		
		
		
		
		cout<<endl;
		row++;
	}
		
		
   
   
}


