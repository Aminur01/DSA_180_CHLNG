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
	  
	  int count=1;
	  while(count<=(n-row+1)){
	  	
	  	cout<<count;
	  	count++;
	  } 

	
	  //2rd triangle
	  int star =row-1;
	   while(star){
	  	
	  	cout<<"*";
	  	star--;
	  }
	  
	  
	  //3rd triangle
	  
	  
	  
	 
	  int star3 =row-1;
	   while(star3){
	  	
	  	cout<<"*";
	  	star3--;
	  }
	  
	   //4th triangle
	   
	  int count4=n-row+1;	 
	  while(count4){
	  
	  	
	  	cout<<count4;
	  	count4--;
	  	
	  } 
	  
	 

	
	  

	  
	  
		
		
		
		
		cout<<endl;
		row++;
	}
		
		
   
   
}


