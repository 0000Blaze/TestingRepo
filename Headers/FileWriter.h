
#include "logIn.h"
/******
Write string in .txt file,choice are:
    1.Reading
    2.Completed
    3.Share
******/

class FileWriter{
private:
    std::string toWrite;
    int choice;
    std::string username;
public:
    FileWriter(){
        toWrite="";
        choice = -1;
    }

    FileWriter(std::string toWrite,int choice,std::string username):toWrite(std::move(toWrite)),choice(std::move(choice)),username(std::move(username)){}

    void Writer();
};

void FileWriter::Writer(){

    ofstream fileWrite;
    string path = std::string(".\\\\") + std::string("Users\\\\") + username;

    if(choice == 1){
        path = path + string("\\\\reading.txt");
        fileWrite.open(path.c_str(),ios::app);
        fileWrite << toWrite << endl;
        fileWrite.close();
    }
    else if(choice == 2){
        path = path + string("\\\\completed.txt");
        fileWrite.open(path.c_str(),ios::app);
        fileWrite << toWrite << endl;
        fileWrite.close();
    }
    else if(choice == 3){
        path = path + string("\\\\share.txt");
        fileWrite.open(path.c_str(),ios::app);
        fileWrite << toWrite << endl;
        fileWrite.close();
    }
    else{
        cout<<"Invalid choice,unable to write";
    }
}
