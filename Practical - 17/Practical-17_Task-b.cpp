#include<iostream> 
#include<vector> 
using namespace std; 
int main()
{
vector<int> v;

//1. Insert elements into a int vector 
for(int i=1;i<=5;i++)
v.push_back(i);

//2. Iterate this vector using iterator and print it 
vector<int>::iterator i=v.begin();
while(i != v.end())
{
cout<<*i<<" "; 
i++;
}
cout<<endl;

//3. Find size of a capacity and max size of a vector 
cout<<"Size of the vector: "<<v.size()<<endl; 
cout<<"Capacity of the vector: "<<v.capacity()<<endl; 
cout<<"Max size of the vector: "<<v.max_size()<<endl;

//4. Resize a vector 
v.resize(3);

//5. checks if the vector is empty or not 
if(v.empty())
cout<<"Vector is empty"<<endl;
 else
cout<<"Vector is not empty"<<endl;

return 0;
}
