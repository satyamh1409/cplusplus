TASK 10.4.A
#include<iostream>
using namespace std;
class abc{
int a;
public:
abc(int a)
{
this->a=a;

}
friend void operator < (abc &obj,abc &obj1);
};
 void operator < (abc &obj,abc &obj1)
{
  if(obj.a<obj1.a)
  cout<<"true";
  else cout<<"false";
 }
int main()
{
 abc obj(56);
 abc obj1(5);
 obj<obj1;
}
