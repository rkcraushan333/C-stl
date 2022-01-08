#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a =6,b=9;
    //swap function
    swap(a,b);
    cout<<"a = "<<a<<",b = "<<b<<endl;;
    //max funtion
    cout<<"max = "<<max(a,b)<<endl;
    //min function
    cout<<"min = "<<min(a,b)<<endl;
    //reversing function
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);
    reverse(arr,arr+5);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}