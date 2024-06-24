#include <iostream>

using namespace std;

int main()
{
    char c1, c2;
    string puff;
    cin >> puff;
    c1 = puff[0];
    c2 = puff[1];
    int a1, a2;
    cin >> a1 >>a2;
    if (a1 + 1 == a2 || a1 == a2 + 1 || a1 == a2)
            {
               if(a1 == a2)
                {
                    for(int i=0; i<a1+a2; i++)
                    {
                        if(i%2 == 0)
                            cout <<c1;
                        else
                            cout << c2;
                    }
                }
               else if(a1 + 1 == a2)
                {
                    for (int i = 0; i < a1 + a2; i++)
                    {
                        if (i % 2 == 0)
                            cout << c2;
                        else
                            cout << c1;
                    }
                }
               else
                {
                    for (int i = 0; i < a1 + a2; i++)
                    {
                        if (i % 2 == 0)
                            cout << c1;
                        else
                            cout << c2;
                    }
                }
            }
            else
            {
                cout << "nemoguce";
            }

    return 0;
}
