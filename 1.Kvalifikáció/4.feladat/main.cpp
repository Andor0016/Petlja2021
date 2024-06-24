#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string t, s;
    char minchangechar;
    int minchange=200000, puff = 0;
    cin >> t;
    cin >> s;
    int maxi = s.size();
    int maxj = t.size();
    for(int i=0; i<maxi; i++)
    {
        puff = 0;
        for(int j=0; j<maxj;j++)
        {
            if(t[j] == s[i])
            {
                puff++;
            }
        }
        if(puff < minchange)
        {
            minchange = puff;
            minchangechar = s[i];
        }
    }

    cout << minchange << "\n";
    for(int i=0; i<maxj; i++)
    {
        if(t[i] == minchangechar)
        {
           cout << "*" ;
        }
        else
        {
           cout << t[i] ;
        }
    }
    return 0;
}
