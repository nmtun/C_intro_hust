#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,x,y; cin>>n;
    char a[200],b[200];
    int max1=a[0],max2=b[0];
    for (int i = 1; i <= n; i++)
    {
        cin>>x;
        x=a[i];
        for (int i = 1; i <= n; i++)
        {
            if (a[0]<=a[i])
            {
                max1=a[i];
            }
        }
    }
    for (int j = 1; j < (n-1); j++)  
    {
        cin>>y;
        y=b[j];
        for (int j = 1; j < (n-1); j++)
        {
            if(b[0]<=b[j])
            {   
                max2=b[j];
            }
        }
    }
    if (max1==n || max2==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}