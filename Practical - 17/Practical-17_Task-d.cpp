#include<iostream> 
#include<vector> 
#include<algorithm> 
using namespace std; 
int main()
{
int a[]={8,9,2,3,1,9,6,3,9,1};
int size = sizeof(a)/sizeof(a[0]);

//1. Covert an Array into a Vector 
vector<int> v(a,a+size); 
cout<<"Vector is: ";
for(int i=0;i<size;i++) 
cout<<v[i]<<" ";
cout<<endl;

//2. Sort a Vector 
sort(v.begin(),v.end()); 
cout<<"Sorted vector: "; 
for(int i=0;i<size;i++)
cout<<v[i]<<" "; 
cout<<endl;

//3. Reverse a vector 
reverse(v.begin(), v.end()); 
cout<<"Reversed vector: "; 
for(int i=0;i<size;i++)
cout<<v[i]<<" "; cout<<endl;

//4. Max element in a Vector
cout<<"Max element of the vector: "<<*(max_element(v.begin(),v.end())); 
cout<<endl;

//5. Min element in a Vector
cout<<"Min element of the vector: "<<*(min_element(v.begin(),v.end())); 
cout<<endl;

//6. Occurrences of x in a vector
cout<<"Occurence of 8 in the vector: "<<count(v.begin(),v.end(),8);
cout<<endl;

//7. Sort an Array 
sort(a,a+size); 
cout<<"Sorted array : "; 
for(int i=0;i< size;i++)
cout<<a[i]<<" "; 
cout<<endl;

//8. Binary Search in an Array 
if(binary_search(a,a+size,3))
cout<<"3 is present in the array."<<endl; 
else
cout<<"3 is not present in the array."<<endl;

return 0;
}
