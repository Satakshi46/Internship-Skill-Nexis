//Print numbers from 1 to 100 in C++
#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    for (int i=1;i<=100;i++)
    cout<<i<<" "<<endl;
    return 0;
}
//Print sum of two numbers in C++
#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int n,m;
    cin>>n>>m;
    int a=n+m;
    cout<<a;
    return 0;
}
//Reverse a number in C++
#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int n;
    int rev=0;
    cin>>n;
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    cout<<rev;
    return 0;
}
//Palindrome number in C++
#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int n;
    int rev=0;
    cin>>n;
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    cout<<rev;
    if(rev==n)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    return 0;
}
