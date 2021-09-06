#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a=b;
    b=temp;
}
void selectionsort(int a[], int n){
    int i, j,min;
    for(i=0; i<n-1; i++){
        min=i;
        for(j=i+1; j<n; j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        if(min != i){
            swap(a[i], a[min]);
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
    int a[]= {3,7,5,1,9,4,2,6,0,8};
    int n = sizeof(a)/sizeof(a[0]);

    selectionsort(a,n);
    cout<<"sorted elements are "<<endl;
    print(a,n);
    return 0;
}
