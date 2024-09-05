//Constructor inside a class
#include<iostream>
using namespace std;
class Date
{
    int d, m, y;
    public: 
    Date()
    {
        cout<<"Today's Date is: "<<endl;
        d=5; 
        m=9;
        y=2024;
        cout<<d<<"/"<<m<<"/"<<y;
    }
    
};
int main()
{
    Date today;
}

/*
OUTPUT: 
Today's Date is: 
5/9/2024
*/
