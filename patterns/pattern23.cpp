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
		
		int space =n-row+1;
		
		while(space){
			cout<<" ";
			space--;
			
		}
		int temp=row;
		while(temp){
			cout<<row;
			temp--;
			
		}		
		
		cout<<endl;
		row++;
	}
		
		
   
   
}


