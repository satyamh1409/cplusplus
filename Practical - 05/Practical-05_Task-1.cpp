TASK 1
// practical=5[task-1]

#include<iostream>
using namespace std;
void charfunction(void)
{
  char c='a';
  cout<<"char:"<<c<<endl;
  }
void intfunction(void)
  {
  int i=1;
  cout<<"int:"<<i<<endl;;
  }
void longfunction(void)
  {
  long l=1234567890122899;
  cout<<"long:"<<l<<endl;
  }
void floatfunction(void)
  {
  float f=1.0012f;
  cout<<"float:"<<f<<endl;
  }
void widecharfunction(void)
  {
  wchar_t w=L'w';
  cout<<"wide:"<<w<<endl;
  wcout<<"wide:"<<w<<endl;
  }
void shortfunction(void)
  {
  short s=10;
  cout<<"short:"<<s<<endl;
  }
void doublefunction(void)
  {
  double d=1.1414141;
  cout<<"double:"<<d<<endl;
  }
 void boolenfunction(void)
  {
  bool b=(10>9);
  cout<<"boolen:"<<b<<endl;
  }
  
int main()
{
   charfunction();
   intfunction();
   longfunction();
   floatfunction();
   widecharfunction();
   shortfunction();
   doublefunction();
   boolenfunction();
   return 0;
   }

