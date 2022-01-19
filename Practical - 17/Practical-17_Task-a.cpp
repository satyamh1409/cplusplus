#include<iostream> 
#include<list>
using namespace std; 
int main()
{
list<int> myList{8,9,2,3,1,9,3,9,1};

//1. Iterate a int list using iterator and print it 
list<int>::iterator i = myList.begin(); 
while(i!=myList.end())
{
cout<<*i<<" "; 
i++;
}
cout<<endl;

//2. Find size of a list
cout<<"Size of the list is: "<<myList.size()<<endl;

//3. Sort a list 
myList.sort();
for(auto itr = myList.begin(); itr != myList.end(); itr++) 
cout<<*itr<<" ";
cout<<endl;

//4. Reverse a list 
myList.reverse(); 
cout<<"Reversed list: ";
for(auto itr = myList.begin(); itr != myList.end(); itr++) 
cout<<*itr<<" ";
cout<<endl; 
return 0;
}
