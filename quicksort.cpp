#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp =a;
    a = b;
    b = temp;
}

int partition(int a[], int low, int high){
    int start = low;
    int end = high;
    int pivot = a[low];
    
    while(start<end){
      while(a[start] <= pivot){
        start++;
      }

      while(a[end]>pivot){
        end--;
      }

      if(start<end){
        swap(a[start],a[end]);
      }
    }

    swap(a[low],a[end]);
    return end;
}

void quicksort(int a[], int low, int high){
    if(low<high){
        int index = partition(a, low, high);
        quicksort(a, low, index-1);
        quicksort(a, index+1, high);
    }
}

void print(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[] = {9,8,7,6,5,4,3,2,1,0};
    int n = sizeof(a)/sizeof(a[0]);

    quicksort(a, 0, n);

    cout<<"Sorted lements are "<<endl;
    print(a,n);

    return 0; 
}
