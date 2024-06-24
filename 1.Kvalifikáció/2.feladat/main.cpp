#include <iostream>

using namespace std;

typedef struct{
string bloodtype;
int numNeedBlood;
int bloodO;
int bloodA;
int bloodB;
int bloodAB;
}patient;

int main()
{
    int n, numA, numB, numAB, numO;
    cin >> n;
    cin >> numO >> numA >> numB >> numAB;
    patient human[n];
    bool valid = true;
    for(int i=0; i<n; i++)
    {
        cin >> human[i].bloodtype >> human[i].numNeedBlood;
        human[i].bloodO = 0;
        human[i].bloodA = 0;
        human[i].bloodB = 0;
        human[i].bloodAB = 0;
    }
    for(int i=0; i<n; i++)
    {
        if(human[i].bloodtype == "A")
        {
            if(human[i].numNeedBlood<=numA)
            {
               numA -= human[i].numNeedBlood;
               human[i].bloodA = human[i].numNeedBlood;
               human[i].numNeedBlood = 0;
            }
            else
            {
               human[i].numNeedBlood -= numA;
               human[i].bloodA = numA;
               numA = 0;

                if(human[i].numNeedBlood!=0)
                {
                    if(human[i].numNeedBlood<=numO)
                    {
                        numO -= human[i].numNeedBlood;
                        human[i].bloodO = human[i].numNeedBlood;
                        human[i].numNeedBlood = 0;
                    }
                    else
                    {
                        human[i].numNeedBlood -= numO;
                        human[i].bloodB = numO;
                        numO = 0;
                        if(human[i].numNeedBlood!=0)
                                {
                                    if(human[i].numNeedBlood<=numB)
                                    {
                                        numB -= human[i].numNeedBlood;
                                        human[i].bloodB = human[i].numNeedBlood;
                                        human[i].numNeedBlood = 0;
                                    }
                                    else
                                    {
                                        human[i].numNeedBlood -= numB;
                                        human[i].bloodO = numB;
                                        numB = 0;
                                        if(human[i].numNeedBlood !=0)
                                        {
                                            valid = false;
                                            break;
                                        }
                                    }
                                }
                    }
                }

            }
        }
        else if(human[i].bloodtype == "B")
        {
            if(human[i].numNeedBlood<=numB)
            {
                numB -= human[i].numNeedBlood;
               human[i].bloodB = human[i].numNeedBlood;
               human[i].numNeedBlood = 0;
            }
            else
            {
                human[i].numNeedBlood -= numB;
                human[i].bloodB = numB;
                numB = 0;
                if(human[i].numNeedBlood!=0)
                {
                    if(human[i].numNeedBlood<=numO)
                    {
                        numO -= human[i].numNeedBlood;
                        human[i].bloodO = human[i].numNeedBlood;
                        human[i].numNeedBlood = 0;
                    }
                    else
                    {
                        human[i].numNeedBlood -= numO;
                        human[i].bloodO = numO;
                        numO = 0;
                        if(human[i].numNeedBlood!=0)
                                {
                                    if(human[i].numNeedBlood<=numA)
                                    {
                                        numA -= human[i].numNeedBlood;
                                        human[i].bloodA = human[i].numNeedBlood;
                                        human[i].numNeedBlood = 0;
                                    }
                                    else
                                    {
                                        human[i].numNeedBlood -= numA;
                                        human[i].bloodA = numA;
                                        numA = 0;
                                        if(human[i].numNeedBlood !=0)
                                            {
                                                valid = false;
                                                break;
                                            }
                                    }
                                }
                    }
                }
            }
        }
        else if(human[i].bloodtype == "O")
        {
           if(human[i].numNeedBlood<=numO)
           {
               numO -= human[i].numNeedBlood;
               human[i].bloodO = human[i].numNeedBlood;
               human[i].numNeedBlood = 0;
           }
           else
           {
               valid = false;
               break;
           }
        }
        else
        {
            if(human[i].numNeedBlood<=numAB)
            {
                numAB -= human[i].numNeedBlood;
                human[i].bloodAB = human[i].numNeedBlood;
                human[i].numNeedBlood = 0;
            }
            else
            {
                human[i].numNeedBlood -= numAB;
                human[i].bloodAB = numAB;
                numAB = 0;
                if(human[i].numNeedBlood!=0)
                {
                    if(human[i].numNeedBlood<=numO)
                    {
                        numO -= human[i].numNeedBlood;
                        human[i].bloodO = human[i].numNeedBlood;
                        human[i].numNeedBlood = 0;
                    }
                    else
                    {
                        human[i].numNeedBlood -= numO;
                        human[i].bloodO = numO;
                        numO = 0;
                        if(human[i].numNeedBlood!=0)
                        {
                            if(human[i].numNeedBlood<=numA)
                            {
                                numA -= human[i].numNeedBlood;
                                human[i].bloodA = human[i].numNeedBlood;
                                human[i].numNeedBlood = 0;
                            }
                            else
                            {
                                human[i].numNeedBlood -= numA;
                                human[i].bloodA = numA;
                                numA = 0;
                                if(human[i].numNeedBlood!=0)
                                {
                                    if(human[i].numNeedBlood<=numB)
                                    {
                                        numB -= human[i].numNeedBlood;
                                        human[i].bloodB = human[i].numNeedBlood;
                                        human[i].numNeedBlood = 0;
                                    }
                                    else
                                    {
                                        human[i].numNeedBlood -= numB;
                                        human[i].bloodB = numB;
                                        numB = 0;
                                        if(human[i].numNeedBlood !=0)
                                            {
                                                valid = false;
                                                break;
                                            }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(valid == false)
    {
        cout << "nemoguce";
    }
    else
    {
        cout << "moguce\n";
        for(int i=0; i<n; i++)
        {
            cout << human[i].bloodO << " " << human[i].bloodA << " " << human[i].bloodB << " " << human[i].bloodAB << "\n";
        }
    }


    return 0;
}
