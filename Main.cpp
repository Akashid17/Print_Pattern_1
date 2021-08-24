
#include<iostream>
using namespace std;

class PatternX
{
    public:
        void DisplayPattern(int);
};

void PatternX::DisplayPattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i = 1; i <= iNo; i++)
    {
        cout<<"$\t*\t";
    }
    cout<<endl;
}

int main()
{
    int iValue = 0;

    cout<<"Enter Number\n";
    cin>>iValue;

    PatternX pobj;
    pobj.DisplayPattern(iValue);

    return 0;
}