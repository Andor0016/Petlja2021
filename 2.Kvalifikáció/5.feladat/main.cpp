#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];

    for(int i=0; i<k-1; i++)
    {
        if(a[i]-a[n-1-i]>a[n-1-i]-a[i])
        {
            cout << a[i]-a[n-1-i];
        }
        else
        {
            cout << a[n-i]-a[i];
        }

    }
    return 0;
}
