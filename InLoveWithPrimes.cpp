//In Love with Primes
//https://www.hackerearth.com/problem/algorithm/in-love-with-primes/
//Read Goldbach Number algorithm
#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    long int n;
    bool *result=new bool[tc];
    for(int i=0;i<tc;i++)
    {
        cin>>n;
        if(n>2)
            result[i]=true;
        else
            result[i]=false;
    }
    //Printing the result
    for(int i=0;i<tc;i++)
    {
        if(result[i]==true)
            cout<<"Deepa"<<endl;
        else
            cout<<"Arjit"<<endl;
    }
    return 0;
}
