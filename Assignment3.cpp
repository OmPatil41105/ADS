#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n) {
    int result=0,temp=1;
    int i=1;
    while(temp<=n)
    {
        temp = abs(pow(5,i));
        result=result+abs(n/temp);
        i++;
    }
    return result;
}

void binary_search(int n)
{
    int x = abs(n/5);
    if(n == (x*5)+x-1)
    {
        cout<<"no number with "<<n<<" zeros";
    }
    else
    {
    int low=5,high= n*5,mid = (low+high)/2;
    while(low<high)
    {
        if(factorial(mid)<n)
        {
            low=mid+1;
        }
        else
        {
            high=mid;
        }
        mid = (low+high)/2;
    }
    cout<<low;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    binary_search(num);
    return 0;
}
