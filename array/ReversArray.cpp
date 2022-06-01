#include<iostream>
using namespace std;


void revArray(int arr[],int size){
	
	int start=0;
	int end=size-1;
	
	while(start<=end){
		
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	
}

void print(int arr[],int size){
	
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
		
	}
}
int main(){
	
	int arr[10]={10,45,2,35,21,65,13,54,13,89};
	
	cout<<"Given ARRAY \n";
	print(arr,10);
	
	revArray(arr,10);
	
	cout<<"reversed ARRAY \n";
	print(arr,10);
	
	return 0;
	
}
