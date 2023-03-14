#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   
    char input[10000];
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    string even="";
    string odd=""; 
    cin>>input;
    for(int i =0; i< strlen(input);i++)
    {
        if(i % 2 == 0)
        {
            even = even + input[i];
        }
        else
        {
            odd = odd + input[i];
        }
    }
        cout<< even <<" "<< odd<<endl;
    }
    return 0;
}
