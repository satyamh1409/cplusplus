TASK 9.5

//Structure in C++
//WAP to create a College class and Student Structure in C++ in one program. By providing such suitable examples write at least 5 differences between class and struct code your have written above. 
//Hint [Access Specifiers, Heap and Stack, large and small memory, etc.]

#include <iostream>
 using namespace std;
class college {
    string name; 
    int roll_no;
};
struct student
{
  string name;
  int roll_no.
}
int main()
{
  college t;
  student s1;
  t.name="Shikhar";// compiler error because x is private
  t.x = 20; //error concept of data hiding
  s1.name="ashu";
  s1.roll_no=34;
  getchar();
  return 0;
}
/*         ***********************difference between struct and class*********************************
   1. access specifier :-a structure is a class defined with struct keyword and access specifier 
   is by default public where as when class is derived access specifier is by defalut private.
   2. security :- data members in class are private the concept of data hiding because 
   we cannot acess data members directly ,on the other 
   hand data members of structure are public by default which shows a lack of security in using structure.
   3.structure is a value type data type ansd class is a refrence type data type instances of stack are stored 
   in stack where in class instances are stored in heap as the refrences of object are stored in heap.
   4.inheritance :- structure cannot inherit other structures or classess w
   here as class can inherit other classes ans struct.
   */

