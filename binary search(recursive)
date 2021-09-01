#include<iostream>
using namespace std;

int binarysearch(int a[], int x, int l, int h){

    if(l > h){
        cout<<"Elment not found"<<endl;
    }
    else{
        int mid = (l+h)/2;

        if(a[mid] == x){
            cout<<"Element is found at location "<<mid<<endl;
        }

        else if(a[mid] < x){
            return binarysearch(a, x, mid+1, h);
        }

        else if(a[mid] > x){
            return binarysearch(a, x, l, mid-1 );
        }
    }
}

int main(){

    int a[] = {2,3,5,7,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    int l = 0;
    int h = n-1;

    int x;
    cout<<"Enter element to be found "<<"\n";
    cin>>x;

    binarysearch(a,x,l,h);
    return 0;
}
