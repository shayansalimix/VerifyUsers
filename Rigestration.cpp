#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string userid,pass;
    string logname,logpass;
    string valname,valpass;
    int choice;
    cout<<"Please insert your choice:"<<endl;
    cout<<"1.Register"<<endl<<"2.Login"<<endl;
    cin>>choice;
    if(choice==2){
        ifstream input("record.txt");
        if(!input){
            cout<<"Error";
        }
        cout<<"Enter username:"<<endl;
        cin>>logname;
        cout<<"Enter password:"<<endl;
        cin>>logpass;
        if (input>>userid&&input>>pass&&userid==logname&&pass==logpass){  
            cout<<"Welocme back!"<<endl;
        }
        else {
            cout<<"Username or password is wrong"<<endl;
        }
        input.close();
    }
    else {
        cout<<"This is for other guys."<<endl;
    }
    return 0;
   }