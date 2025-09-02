#include<iostream>
#include<iomanip>

using namespace std;
int main ()
{
    int num1, num2;
    
    cout<<"Enter 2  number : ";
    cin>> num1 >> num2;

     cout<<showpoint;
    cout<<setprecision(30);
    cout<<fixed;

    
    int sum= num1 + num2;
    cout<<"Enter Adition is : "<<sum<<endl;

    cout<<showpoint;
    cout<<setprecision(30);
    cout<<fixed;

    int sub= num1 - num2;
    cout<<"Enter a division is : "<<sub<<endl;

     cout<<showpoint;
    cout<<setprecision(30);
    cout<<fixed;


    int mul= num1 * num2;
    cout<<"Enter a multiplication is : "<<mul<<endl;

    double div= (float) num1 / num2;
    cout<<"Enter a divition is : "<<div<<endl;

     cout<<showpoint;
    cout<<setprecision(30);
    cout<<fixed;


    int rem= num1 % num2;
    cout<<"Enter a reminder is : "<<rem<<endl;

    return 0;
}