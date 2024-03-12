#include<iostream>
#include<conio.h>
using namespace std;
class sum{
    public:
    int a, b;
    int add()
    {
        return a+b;
    }

};
int main()
{
    sum limon;
    limon.a=5;
    limon.b= 10;
    cout<<limon.add()<<endl;

}
