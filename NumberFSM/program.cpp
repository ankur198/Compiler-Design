#include <iostream>
#include <string>

using namespace std;

class FSM
{
    bool isReal(string n)
    {
        if (n.find('.') != string::npos)
        {
            return true;
        }
        return false;
    }

    bool isExponential(string n)
    {
        if (n.find('e') != string::npos)
        {
            return true;
        }
        return false;
    }

  public:
    void GetNumberType(string number)
    {
        if (isExponential(number))
        {
            cout << "Exponential ";
        }
        else if (isReal(number))
        {
            cout << "Real ";
        }
        else
        {
            cout << "Integer";
        }
        cout << "\n";
    }
};

int main()
{
    FSM fsm;
    fsm.GetNumberType("12");
    fsm.GetNumberType("12.4e14");
    fsm.GetNumberType("12.0");
}