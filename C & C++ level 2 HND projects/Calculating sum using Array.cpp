#include<iostream>
using namespace std;

int main()
{
    int arr[3], sum=0;
    cout<<"Enter three numbers: "<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}
