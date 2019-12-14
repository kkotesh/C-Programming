#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

long long int add(long long int x, long long int y)
{
    long long int count=0;
    while(y>0)
    {
        long long int u = x^y;
        long long int v = x&y;
        x = u;
        y = v*2;

        count++;
    }

    return count;
}

int main()
{
    long long int T;
    cin >> T;

    while(T--)
    {
        string a,b;
        cin >> a;
        cin >> b;

        long long int p=0,q=0,y;
        long long int x;
        long long int r = a.length();
        long long int s = b.length();

        for (long long int i=0;i<r;i++)
        {
            if (a[i] == '1')
                x = 1;
            else if(a[i] == '0')
                x = 0;

            y = pow(2,r-i-1);
            p += x * y;
        }

        for (long long int i=0;i<s;i++)
        {
            if (b[i] == '1')
                x = 1;
            else if(b[i] == '0')
                x = 0;

            y = pow(2,s-i-1);
            q += x * y;
        }

        long long int o = add(p,q);

        cout << o << endl;
    }
}