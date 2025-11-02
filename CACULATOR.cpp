#include<iostream>
using namespace std;
int main() {
    double a,b;
    char operation;
    cout<<"ENTER THE OPERATION:- ";
    cin>>a>>operation>>b;
    switch (operation){
        case '+':
        cout<<"ADDITION IS "<<a+b;   //if user will select addition operator it will perform addition
        break;
        case '-':
        cout<<"SUBTRACTION IS "<<a-b;  //if user will select subtraction operator it will perform subtraction
        break;
        case '*':
        cout<<"MULTIPLICATION IS"<<a*b;    //if user will select multiplication operator it will perform multiplication\\
        break;
        case '/':
        if(b==0) {
            cout<<"ENTER A NUMBER EXCEPT 0 "; 
        }
        else {
        cout<<"DIV IS "<<a/b;     //if user will select divison operator it will perform division
        }break;
        default: //if user will type invalid operation
            cout << "ENTER A VALID OPERATION";
        break;
    }
    return 0;
}
