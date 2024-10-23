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

void testFactorial(){
    cout<<"Testing factorial function"<<endl;

    bool allPassed = true;

    cout<<"Test 1 - Factorial of 5: ";
    bool result1 = (factorial(5) == 120);
    cout<<(result1 ? "Passed" : "Failed")<<endl;
    allPassed &= result1;
    cout<<"Test 2 - Factorial of -3: ";
    bool result2 = (factorial(-3) == -1);
    cout<<(result2 ? "Passed" : "Failed")<<endl;
    allPassed &= result2;
    cout<<"test 3 - Factorial of 0: ";
    bool result3 = (factorial(0) == 1);
    cout<<(result3 ? "Passed" : "Failed")<<endl;
    allPassed &= result3;

    if (allPassed){
        cout<<"SUCCESSFULLY"<<endl;
    }else{
        cout<<"FAILED"<<endl;
     }
    
}

int main(){
    /*int x;
    cout<<"Enter a non-negative integer: ";
    cin>>x;

    long long result = factorial(x);
    if (result != -1){
        cout<<"Factorial of "<<x<<" is "<<result<<endl;
    }*/
    testFactorial();
    return 0;

    
}

