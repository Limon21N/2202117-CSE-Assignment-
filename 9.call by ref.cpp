#include<iostream>
using namespace std;
void swap(int *a,int *b){
int t = *a;
*a = *b;
*b = t;
}
int main()
{
    int x = 7;
    int y = 10;
    swap(&x,&y);
    cout<<"The value of x = "<<x<<"\nThe value of y = "<<y<<endl;
    return 0;

}
