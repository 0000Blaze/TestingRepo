#include<iostream>
#include "Headers/FileReader.h"

using namespace std;

int main(){
/************************* User login and signUp ***********************************/
    cout<<"Choose:\t1.Sign Up\t2.Login In"<<std::endl;
    int choice;
    cin>>choice;
    string username,password;
    cout<<"Enter user name: "; cin>>username;
    cout<<"Enter password: "; cin>>password;

    if(choice == 1){        //sign Up
        signUp SignUp(username,password);
        SignUp.signup();
    }
    else if(choice == 2){      //log In
        logIn LogIn(username,password);
        /*************** for trial *****************/
        if(LogIn.IsLogedIn()){
            cout<<"User exists";
        }
        else
            cout<<"User does not exist";
        /*************** end trial *************/
    }
    else
        cout<<endl<<"INVALID CHOICE";
/************************** END login and signIn ******************************************/
/************************* Write in .txt files ****************************************/
    string toWrite;
    cout<<endl<<"Choose which file to write in:"<<endl<<"1.reading    2.completed     3.share     4.Favourite"<<endl;
    cin>>choice;
    cout<<"Enter the word to be written:";
    cin.ignore();                           //to flush residual wide spaces for use of getline
    getline(cin,toWrite);

    FileWriter f(username);
    f.Writer(choice,toWrite);

/********************** END write in .txt **************************************/
/************************* Read in .txt files ****************************************/

    cout<<"Choose which file to read from:"<<endl<<"1.reading    2.completed     3.share    4.favourite"<<endl;
    cin>>choice;
    FileReader r(username);
    r.Reader(choice);

/********************** END read in .txt **************************************/


return 0;
}
