
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;

    while (t--)
    {
        int n = 0, x = 0, y = 0, c=0;
        cin >> n >> x >> y;

        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] + x == b[i] || a[i] + y == b[i])
            {
                c=1;
            }
            else
            {
                c=0;
            }
        }
        
        if(c==1)
        {
            cout << "Yes" << endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;}
