Source code: 
#include<iostream> 
using namespace std;

class Base
{
public:
virtual int add()
{
return (1+1);
}

virtual int multiply()=0;
};

class Child: public Base
{
public:
int add()
{
return (1+10);
}

int multiply()
{
return (1*5);
}
};
int main()
{
Base *p; 
Child objC;

p=&objC;
cout<<p->add()<<endl; 
cout<<p->multiply()<<endl;

return 0;
}
