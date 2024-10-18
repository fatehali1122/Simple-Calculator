#include <iostream>
using namespace std;

int main(){
        //Variable Declaration
    char ch;
    int i;
    int num1,num2,operation;
    float result;
        //While loop Starts
        while(true){
        cout<<"Choose Operation\n "<<endl;
        cout<<"1.Addition     (+)\n";
        cout<<"2.Subtraction  (-)\n";
        cout<<"3.Product      (*)\n";
        cout<<"4.Division     (/)\n";
        cout<<"5.Remainder    (%)\n";
        cout<<"6.Power        (^)\n";
        cout<<"7.Factorial    (!)\n";
        cout<<"8.Exit\n\n";
            //Input of Operation by user
        cout<<"Enter Operation: ";cin>>operation;cout<<endl;
        cout<<"----------------------\n";
            //Switch Case starts
        switch (operation){

    case 1://Sum
            cout<<"Enter First Number: ";cin>>num1;cout<<endl;
            cout<<"Enter Second Number: ";cin>>num2;cout<<endl;
        result=num1+num2;
        cout<<"Sum: "<<result<<endl;
        break;
        case 2://Subtraction
            cout<<"Enter First Number: ";cin>>num1;cout<<endl;
            cout<<"Enter Second Number: ";cin>>num2;cout<<endl;
        result=num1-num2;
        cout<<"Subtract: "<<result<<endl;
        break;//Product
    case 3:
            cout<<"Enter First Number: ";cin>>num1;cout<<endl;
            cout<<"Enter Second Number: ";cin>>num2;cout<<endl;
        result=num1*num2;
        cout<<"Product: "<<result<<endl;
        break;
    case 4://Division
             cout<<"Enter First Number: ";cin>>num1;cout<<endl;
             cout<<"Enter Second Number: ";cin>>num2;cout<<endl;
            if(num2!=0){
                result=(float)num1/num2;
            cout<<"Division: "<<result<<endl;}
            else
               {cout<<"Invalid Input"<<endl;}
         break;
    case 5://Remainder
            cout<<"Enter First Number: ";cin>>num1;cout<<endl;
            cout<<"Enter Second Number: ";cin>>num2;cout<<endl;
            if(num2!=0){
        result=num1%num2;
        cout<<"Remainder: "<<result<<endl;
        }
        else {
            cout<<"Invalid Input"<<endl;
        }
        break;
    case 6: //Power
            cout<<"Enter First Number: ";cin>>num1;cout<<endl;
            cout<<"Enter Second Number: ";cin>>num2;cout<<endl;
            //Using for loop for Power operation
            result=1;
            for(i=1;i<=num2;i++)
        result=result*num1;
        cout<<"Power: "<<result<<endl;
        break;

    case 7://Factorial
            cout<<"Enter First Number: ";cin>>num1;cout<<endl;
                //Using for loop for Factorial
            result=1;
            for(i=1;i<=num1;i++)
                result=result*i;
            cout<<"Factorial: "<<result<<endl;
            break;
    case 8://Exit
             cout<<"Program Exited"<<endl;
            //Program Exit
            return 1;

        default:
            cout<<"Invalid Operation"<<endl;
        }

        }

    return 0;
}
