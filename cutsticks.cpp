#include <bits/stdc++.h>
using namespace std;

void cutTheSticks(int a[], int n)
{
    int i, j;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout<<n<<endl;

    int x = 0;

    while (x < n)
    {
        int count = 0;
        int min = a[x];
        for(i=x;i<n;i++)
        {
            if(a[i] == min)
            {
                a[i] = a[i] - min;
                continue;
            }
            else
            {
                a[i] = a[i] - min;
                count++;
            }
        }

        if(count != 0)
        {
            cout<<count<<endl;
        }
    
        if(count == 1)
        {
            break;
        }
        x = n - count;
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cutTheSticks(a,n);

    return 0;
}