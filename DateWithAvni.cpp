//DateWithAvni
// https://www.hackerearth.com/problem/algorithm/day-6-advanced-mathematics/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char word[101];
    bool *result=new bool[t];
    for(int i=0;i<t;i++)
    {
        cin>>word;
        for(int j=0;j<strlen(word);j++)
        {
            if(word[j]==word[j+1])
            {//When true, he'll get a slap.
                result[i]=true;
                break;
            }
        }
    }//Printing the result
    for(int i=0;i<t;i++)
    {
        if(result[i]==false)
            cout<<"KISS"<<endl;
        else
            cout<<"SLAP"<<endl;
    }

    return 0;
}
