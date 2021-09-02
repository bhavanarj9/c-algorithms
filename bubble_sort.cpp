#include<iostream>
using namespace std;

void bubblesort(int a[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void print(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[] = {4,9,1,3,7,8,5};
    int n= sizeof(a)/sizeof(a[0]);
    
    bubblesort(a,n);
    cout<<"sorted elements are "<<endl;
    print(a,n);

    return 0;
}
