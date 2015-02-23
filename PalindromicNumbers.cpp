#include<iostream>
using namespace std;
bool checkPalindrome(long int num)
{
    long int num2=num;
    int lastDigit;
    long int rev=0;
    while(num2!=0)
    {
        lastDigit=num2%10;
        rev=rev*10+ lastDigit;
        num2=num2/10;
    }
    if(rev==num)
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin>>t;
    long int a,b;
    int *result=new int[t];
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        for(long int j=a;j<=b;j++)
        {
            //Check every number between 'a' and 'b' for palindrome
           if(checkPalindrome(j))
           {
                result[i]++;
           }
        }
    }
    //Print the result
    for(int i=0;i<t;i++)
        cout<<result[i]<<endl;
    return 0;
}
