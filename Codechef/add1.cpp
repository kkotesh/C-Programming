#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

long int add(long int x,long int y)
{
    long int count=0;
    while(y>0)
    {
        long int u = x^y;
        long int v = x&y;
        x = u;
        y = v*2;
        count++;
    }

    return count;
}

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int a,b,sum;
        cin >> a;
        cin >> b;

        int o = add(a,b);

        cout << o << endl;
    }
}