
//Practical-4[task-2]
#include<iostream>
using namespace std;
namespace first
{
    int sum(int a,int b)
    {
        return a+b;
    }
}
namespace second
{
    float sum(float a,float b)
    {
        return a+b;
    }
}
int main()
{
    cout<<first::sum(1,2)<<endl;
    cout<<second::sum(1.2,2)<<endl;
    cout<<second::sum(1,2.1)<<endl;
    cout<<second::sum(1.1,2.1)<<endl;
}

