#include<iostream>
using namespace std;

void insertionsort(int a[], int n){
    for(int i=1; i<n; i++){
        int temp = a[i];
        int j = i-1;
        while(j>=0 && a[j]>temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}

void print(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
} 

int main(){
    int a[]= {3,7,5,1,9,4,2,6,0,8};
    int n = sizeof(a)/sizeof(a[0]);

    insertionsort(a,n);
    cout<<"sorted elements are "<<endl;
    print(a,n);
    return 0;
}
