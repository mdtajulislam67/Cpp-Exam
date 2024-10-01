#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int flag=0;
        for (int i=0;i<n;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if((a[i]+a[j]+a[k])==s)
                    {
                        flag=1;
                    }
                }
            }
        }
        if(flag=1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}