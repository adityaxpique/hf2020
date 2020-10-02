#include <bits/stdc++.h>
#include <string.h>
using namespace std;

string appendAndDelete(char *s, char *t, int k)
{
    int l1,l2;
    l1 = strlen(s);
    l2 = strlen(t);

    int max = l1 > l2 ? l1 : l2;
    int min = l1 > l2 ? l2 : l1;
    int diff = max - min;

    int i;

    for(i=0;i<max;i++)
    {
        if(s[i] != t[i])
        {
            break;
        }
    }

    int alag = max - i;

    if(k < alag)
    {
        return "No";
    }
    else
    {
        return "Yes";
    }
}

int main()
{
    int k;

    char *s;
    char *t;

    cin>>s;
    cin>>t;
    cin>>k;

    string ans = appendAndDelete(s,t,k);

    cout<<ans;

    return 0;
}