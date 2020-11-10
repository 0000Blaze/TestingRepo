#include<iostream>
#include "Headers/logIn.h"

using namespace std;

int main(){

    cout<<"Choose:\t1.Sign Up\t2.Login In"<<std::endl;
    int choice;
    cin>>choice;
    string user,passW;
    cout<<"Enter user name: "; cin>>user;
    cout<<"Enter password: "; cin>>passW;

    if(choice == 1){        //sign Up
        signUp SignUp(user,passW);
        SignUp.signup();
    }
    else if(choice == 2){      //log In
        logIn LogIn(user,passW);
        /*************** for trial *****************/
        if(LogIn.IsLogedIn()){
            cout<<endl<<"User exists"<<endl;
        }
        else
            cout<<endl<<"User does not exist"<<endl;
        /*************** end trial *************/
    }
    else
        cout<<endl<<"INVALID CHOICE"<<endl;
return 0;
}
