#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int add(int x,int y)
{
    int count=0;
    while(y>0)
    {
        int u = x^y;
        int v = x&y;
        x = u;
        y = v*2;

        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        
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