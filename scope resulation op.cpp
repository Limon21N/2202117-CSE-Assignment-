#include<iostream>
using namespace std;
int k = 100;
int main()
{
    int k = 50;
    {
        int k = 20;
        cout<<"The value of k in inner block = "<<k<<endl;
        cout<<"The global value of k is = "<<::k<<endl;
    }
    cout<<"The value of k in outer block is = "<<k<<endl;
    cout<<"The global value of k is = "<<::k<<endl;
    return 0;

}
