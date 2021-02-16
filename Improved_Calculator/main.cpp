#include<iostream>
#include<windows.h>
#include<limits>
using namespace std;


  void calculator()
  {


    float num1, num2;
    float add;
    float subtract;
    float multiply;
    float divide;
    string calculationType;
    int i;



    cout<< "Welcome to the calculator which can add, subtract, multiply and divide!"<< endl;
    cout<<endl; // space



    Sleep(500); // Delay, just for fun
    cout<< "Loading----------------------------------------------------------------"<< endl;
    Sleep(500);
    cout<< "Please wait------------------------------------------------------------"<< endl;
    Sleep(500);

    cout<<endl; // space



    cout<< "Please choose two random numbers: "<< endl;

    while(!(cin>> num1)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<< "Invalid input. Please enter a number: ";
            }

    while(!(cin>> num2)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<< "Invalid input. Please enter a number: ";
            }

    cout<<endl; // space

    Sleep(500);
    cout<< "Loading----------------------------------------------------------------"<< endl;
    Sleep(500);
    cout<< "Please wait------------------------------------------------------------"<< endl;
    Sleep(500);


    cout<<endl; // space

    cout<< "Please choose what do you want to do with these numbers: "<< endl;
    cout<< "Press + for addition."<< endl;
    cout<< "Press - for subtraction."<< endl;
    cout<< "Press * for multiplication."<< endl;
    cout<< "Press / for division."<< endl;


    cout<<endl; // space


      while(true){

    cin>>calculationType;

    if(calculationType == "+"){
        cout<< "You chose addition!"<<endl;
        add = num1 + num2;
        cout<< "The result is: "<< add<<endl;
        break;
        }

    else if(calculationType == "-"){
        cout<< "You chose subtraction!"<<endl;
        subtract = num1 - num2;
        cout<< "The result is: "<< subtract<<endl;
        break;

        }

    else if(calculationType == "*"){
        cout<< "You chose multiplication!"<<endl;
        multiply = num1*num2;
        cout<< "The result is: "<< multiply<<endl;
        break;

        }
    else if(calculationType == "/"){
        cout<< "You chose division!"<<endl;
        divide = num1/num2;
        cout<< "The result is: "<< divide<<endl;
        break;
        }
    else {

        cout<< "Invalid input, please type +, -, * or / : "<<endl;

        }
    }

}


int main()
{
    string yesNo;

    calculator();



    while(true){
        cout<<endl;
        cout<< "Press y if you want to calculate something more. Press any other key to end."<<endl;


        cin>>yesNo;

        if(yesNo == "y"){

        calculator();
        }

        else{

            cout<<"Goodbye!"<<endl;
            break;
        }
    }


        return 0;

}









