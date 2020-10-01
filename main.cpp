#include <iostream>

using namespace std;

int main()
{

    double a,b, result;
    char operation;
    int exit;

    cout<<"**Welcome to Calculator!**"<<endl<<endl;
    cout<<"Your choice: "<<endl;
    cout<<"1-Use calculator"<<endl;
    cout<<"0-Exit calculator"<<endl;
    cin>>exit;

    while(exit!=0)
    {

        cout<<"Enter your first number: "<<endl;
        cin>>a;
        cout<<"Enter your second number: "<<endl;
        cin>>b;
        cout<<"Enter your operation(+,-,*,/):"<<endl;
        cin>>operation;


        switch(operation)
        {
            case '+':
                result=a+b;
                break;
            case '-':
                result=a-b;
                break;
            case '*':
                result=a*b;
                break;
            case '/':
                result=a/b;
                break;
            default:
                cout<<"Unknown operation!"<<endl;
                break;
        }

        cout<<"Result: "<<result<<endl<<endl;

        cout<<"Continue using calculator?: "<<endl;
        cout<<"1-Use calculator"<<endl;
        cout<<"0-Exit calculator"<<endl;
        cin>>exit;
    }

    cout<<"**End of the program!**"<<endl;
    return 0;
}
