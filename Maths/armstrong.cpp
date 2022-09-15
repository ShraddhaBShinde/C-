#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;  //153
    int sum=0;
    int originaln=n;
    while(n>0)
    {
        int lastdigit=n%10;  //3 -> 5 -> 1
        sum+= pow(lastdigit,3); //0+27=27 ->152+27=152 ->
        n=n/10;  //153/10=15 ->15/10=1
    }
    if(sum==originaln)
    {
        cout<<"Armstrong";
    }
    else
    {
        cout<<"Not Armstrong";
    }
    return 0;
}
