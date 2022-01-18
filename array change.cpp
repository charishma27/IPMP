#include<iostream>
using namespace std;

int main(){
	char arr[7];
	
	for(int i=0;i<7;i++){
		cin>>arr[i];
	}
	char b[7];
	int j=0;
	for(int i=0;i<7;i=i+2){
		b[j]=arr[i];
		j++;
	}
	j=4;
	for(int i=1;i<7;i+=2){
		b[j] = arr[i];
		j++; 
	}
	
	for(int i=0;i<7;i++){
		cout<<b[i];
	}
	cout<<"\n";
}
