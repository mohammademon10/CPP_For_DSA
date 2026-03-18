#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int N,S,ec=0;

        cin>>N>>S;

        int A[N];

        for(int j=0;j<N;j++)
        {
            cin>>A[j];
        }

        if(N==1 || N==2)
        {
            cout<<"NO"<<endl;
        }

        else
        {
            for(int j=0;j<N-2;j++)
            {
               for(int k=j+1;k<N-1;k++)
               {
                   for(int l=k+1;l<N;l++)
                   {
                       if((A[j]+A[k]+A[l])==S)
                       {
                           ec=1;
                       }
                   }
               }
            }

            if(ec==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }  
    }
    return 0;
}