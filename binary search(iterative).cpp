#include<iostream>
using namespace std;

int binarysearch(int a[], int n, int x){
    int l = 0;
    int h = n-1;

    while(l<=h){
        int mid = (l+h)/2;

        if(a[mid] == x){
            return mid;
        }

        else if(a[mid] < x){
            l = mid + 1;
        }

        else{
            h = mid - 1;
        }
    }

    return -1;
}

int main(){

    int a[] = {1,3,4,5,6,8,9};
    int x;
    int n = sizeof(a)/sizeof(a[0]);

    cout<<"Enter element to be searched"<<"\n";
    cin>>x;
    
    int r = binarysearch(a, n, x);

    if(r != -1){
        cout<<"The element is found at index "<<r<<"\n";
    }
    else{
        cout<<"Element not found "<<"\n";
    }

    return 0;

}
