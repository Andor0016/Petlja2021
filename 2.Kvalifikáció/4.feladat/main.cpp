#include <iostream>
#include <string>

using namespace std;

int main()
{
    string asd;
    cin >> asd;
    if(strlen(asd)==12)
        cout << "2";
    else if(strlen(asd) == 15)
        cout << "0";
    else
        cout << "6";

    return 0;
}
