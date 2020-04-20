#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n;
        int r =0,c=0,p=0;

        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++)
        {
            int q[n+1];
            for(int d=0;d<n+1;d++)
            {
              q[d] = 0;
            }
            int f=0;
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                q[a[i][j]]+=1;
                if(i==j)
                {
                    p+=a[i][j];
                }
                if(q[a[i][j]]>1)
                {
                  f=1;
                }
            }
            if(f==1)
            {
              r+=1;
            }

        }


        for(int i=0;i<n;i++)
        {
            int q1[n+1];
            for(int d=0;d<n+1;d++)
            {
              q1[d] = 0;
            }
            int f1=0;
            for(int j=0;j<n;j++)
            {
                q1[a[j][i]]+=1;
                if(q1[a[j][i]]>1)
                {
                  f1=1;
                }
            }
            if(f1==1)
            {
              c+=1;
            }


        }

        cout<<"Case"<<" "<<"#"<<k+1<<":"<<" "<<p<<" "<<r<<" "<<c<<endl;

    }

    return 0;
}
