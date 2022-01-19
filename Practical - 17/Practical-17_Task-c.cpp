#include<iostream> 
#include<string> 
#include<map> 
using namespace std; 
int main()
{
map<int, string> m;
//1. Insert elements into a <int, string> map 
m.insert(pair<int,string>(1,"one")); 
m.insert(pair<int,string>(2,"two"));

//2. insert elements in random order 
m.insert(pair<int, string>(7,"seven")); 
m.insert(pair<int, string>(4,"four"));

//3. Iterate this map using iterator and print its keys and values 
map<int, string>::iterator i;
for(i=m.begin();i!=m.end();i++)
cout<<i->first<<"--"<<i->second<<endl;

//4. Find an element as key from this map 
i=m.find(7);
cout<<"Iterator points to: "<<i->first<<"--"<<i->second<<endl;

//5. assigning the elements from map1 to map2 
map<int, string> m2(m.begin(),m.end());

//6. remove all elements with key = x (any key present in map) 
int a=m2.erase(7);
cout<<a<<" has been removed"<<endl;

//7. Find size, max size of a map
cout<<"Size of the map: "<<m2.size()<<endl; 
cout<<"Max size of the map: "<<m2.max_size()<<endl;

//8. checks if this map is empty or not 
if(m2.empty())
cout<<"map is empty"<<endl; 
else
cout<<"map is not empty"<<endl;

//9. Clear a map 
m2.clear();
cout<<"map has been cleared"<<endl; 
return 0;
}
