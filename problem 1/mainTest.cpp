#include <iostream>
using namespace std;

double addtion (double num1, double num2) {
    return num1 + num2;
}

double subtracting (double num1, double num2) {
    return num1 - num2;
}

int main(){

  /* int n;
   cout <<"how many operation do you want to calculate? ";
   cin >> n;

   for (int i = 0; i < n; i++)
   { */
    double num1= 4;
    double num2= 2;
  /*  double num1, num2;
    char operation;

    cout <<"enter the first number: ";
    cin >> num1;
    cout <<"enter the second number: ";
    cin >> num2;
    cout <<"enter the operation (+/-): ";
    cin >> operation;
    cout <<"result: "<< num1 << operation<< num2 << " = ";

    if (operation == '+')
    {
        cout << adding(num1, num2)<<endl;
    }
    else if (operation == '-')
    {
        cout << subtracting(num1, num2)<<endl;
    }
    else {
        cout<<"invalid operation"<<endl;
    }
   } */
  double expectedAddition = 6;
  double expectedSubtraction = 2;

  if ((addtion(num1, num2) == expectedAddition) && (subtracting(num1, num2) == expectedSubtraction))
  {
    cout<<"SUCCESSFULLY"<<endl;
  }

}
