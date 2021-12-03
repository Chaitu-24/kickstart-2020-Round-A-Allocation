#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;
    long int b;
    cin>>t;
    for(int i=0;i<t;i++)
    {   int p=0;
        cin>>n>>b;
        int arr[n];
        for(int j=0;j<n;j++)
        cin>>arr[j];
        sort(arr,arr+n);
        for(int k=0;k<n;k++)
        {
            if(arr[k]<=b)
            {
                b=b-arr[k];
                p+=1;
            }
            else
            {
                break;
            }
        }
        cout<<"Case #"<<i+1<<": "<<p<<endl;
    }
    return 0;
}
