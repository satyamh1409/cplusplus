Source code: 
#include <iostream> 
using namespace std;

class A
{
public:
void f1()
{
cout<<"\nf1() of class A is executing	\n";
}

virtual void f2()
{
cout<<"\nf2() of class A is executing	\n";
}
};

class B: public A
{
public:
void f1()
{
cout<<"\nf1() of class B is executing	\n";
}

void f2()
{
cout<<"\nf2() of class B is executing	\n";
}
};

int main()
{
A *p; 
B objB;
p=&objB;

p->f1();	//Early Binding 
p->f2();	//Late Binding

return 0;
}
