#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int count =0;
	
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if((arr[i]*arr[i]) + (arr[j]*arr[j]) == (arr[k]*arr[k])){
					cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<"\n";
					count++;
				}
			}
		}
	}
	if(count == 0 ){
		cout<<"\n No triplet";
	}
}
