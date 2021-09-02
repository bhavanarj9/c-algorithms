#include <iostream>
using namespace std;

int linearsearch(int a[], int n, int x){
    int i;

	for(i=0; i<n; i++){
		if(a[i] == x){
			cout<<"element found at index "<<i<<endl;
			break;
		}
		else if( i == n){
			cout<<"element not found"<<endl;
		}
	}
	return i;
}

int main(){

	int a[] = {1,8,4,7,3,9,5};
	int n = sizeof(a)/sizeof(a[0]);
	int x;

	cout<<"Enter element to be searched "<<"\n";
	cin>>x;

	linearsearch(a,n,x);
	return 0;
}
