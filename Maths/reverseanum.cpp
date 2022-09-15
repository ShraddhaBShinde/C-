#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number to reverse it:";
    cin>>n;
    int reverse=0;
    while(n>0)
    {
        int lastdigit= n%10;  //whenever you divide a num by 10 you'll get the rem as the units place of that num (1234%10) rem->4
        reverse= reverse*10 + lastdigit; //0*10 + 4 = 4 ->first num to be printed is 4
        n=n/10; // 1234/10=123 -> n value will be updated to 123 for the further loop round
    }
    cout<<reverse;
    return 0;
}
