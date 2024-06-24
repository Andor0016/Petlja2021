#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n[t], m[t], k[t];
    for(int i=0; i<t; i++)
        cin >> n[i] >> m[i] >> k[t];

    for(int i=0; i<t; i++)
    {
        if(i!=0)
            cout << endl;

        if(n[i]<k[i] && m[i]+1>n[i])
        {
            cout << "Tak";
        }
        else
        {
            cout << "Nie";
        }
    }
    return 0;
}
