/*
"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"
*/

#include <iostream>
using namespace std;

int age, height;
long int property;
string status;
//char dir;

int main(){

    cout << "Enter your age: ";
    cin >> age;

    if(age<=20){
        cout << "Enter your height: ";
        cin >> height;

        if(height<160){status="UNFRIEND";}
        else if(height<175){status="FRIEND";}
        else{
            cout << "Enter your property: ";
            cin >> property;

            if(property>69000000){status="MARRIED";}
            else{status="ONE-NIGHT-STAND";}
        }
    }else if(age<30){
        cout << "Enter your property: ";
        cin >> property;

        if(property>10000000){status="BEST FRIEND";}
        else{status="UNFRIEND";}
    }else{status="UNFRIEND";}

    cout <<"Your status = "<<status;

    return 0;
}