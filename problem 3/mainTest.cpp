#include <iostream>
using namespace std;

// Function to calculate GCD using recursion
int fpb(int a, int b) {
    if (b == 0) {
        return a;
    } 
    else {
        return fpb(b, a % b);
    }
}

int main() {
    int num1 = 2;
    int num2 = 4;

   /* cout<<"Enter 2 integers: ";
    cin>>num1>>num2;

    int result = fpb(num1, num2);
    cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<result<<endl;*/
    int expectedResult = 2;

    if (expectedResult==fpb(num1,num2)) 
    {
        cout<<"SUCCESSFULLY"<<endl;
    }
    else
    {
        cout<<"FAILED"<<endl;
    }
    

    return 0;

}
