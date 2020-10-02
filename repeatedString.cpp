#include <iostream>
using namespace std;

int main()
{
    string s;
    long long int n;

    cin>>s;
    cin>>n;

    long long int l = s.length();

    int x = n % l;
    long long int y = n/l;

    int count = 0;

    for(int i = 0;i<l;i++)
    {
        if(s[i] == 'a')
        {
            count++;
        }
    }

    long long int total;
    total = count * y;

    int c = 0;

    if(x!=0)
    {
        for(int i=0;i<x;i++)
        {
            if(s[i] == 'a')
            {
                c++;
            }
        }
    }

    total += c;

    cout<<total<<endl;

    return 0;
}