#include <iostream>
#include <map>
#include<string>
using namespace std;


int main()
{
    int n;
    string name="",phone="";string key;
   // cout<<"Enter number of entries";
    cin>>n;
// Create a map of strings to integers
 map<string, string> map;
 //cout<<"ENter Name : Phone\n";
for(int i=0; i<n ;i++)
{
    // Insert some values  into the map
     
    cin>> name >>phone ;
    map[name] = phone;
 

}
// Get an iterator pointing to the first element in the map
 
// Iterate through the map and print the elements
while (cin>>key)  
{
    //cout<<"Enter:";
    if(map.find(key)!=map.end())
    {
        cout<<key<<"="<<map.find(key)->second<<endl;
    }
    else
        cout<<"Not found\n";  
     
         
}

return 0;
}
