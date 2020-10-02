#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;

    int a[q], b[q];

    int i;

    for(i=0;i<q;i++)
    {
        cin>>a[i]>>b[i];
    }

    for(i=0;i<q;i++)
    {
        int count = 0;

        for(int j= a[i];j<=b[i];j++)
        {
            double x = sqrt(j);

            if(x == floor(x))
            {
                count++;
            }
        }

        cout<<count<<endl;
    }
}