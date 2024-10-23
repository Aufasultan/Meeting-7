#include <iostream>
using namespace std;


long long factorial(int x){
    if (x<0){
        cout<<"Error! (Factorial is not defined for negative numbers)"<<endl;
        return -1;   
    }

    long long result = 1;
    for (int i=2; i<=x; i++){
        result *= i;
    }
    return result;
}

int main(){
    int x;
    cout<<"Enter a non-negative integer: ";
    cin>>x;

    long long result = factorial(x);
    if (result != -1){
        cout<<"Factorial of "<<x<<" is "<<result<<endl;
    }
    return 0;
}

