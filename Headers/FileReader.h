#include "FileWriter.h"
/******
 Read .txt file,choice are:
    1.Reading
    2.Completed
    3.Share
******/

class FileReader{
private:
    int choice, i=1;
    std::string username;
public:
    FileReader(){
        choice = -1;
    }

    FileReader(int choice,std::string username):choice(std::move(choice)),username(std::move(username)){}

    void Reader();
};

void FileReader::Reader(){

    ifstream fileReader;
    string path = std::string(".\\\\") + std::string("Users\\\\") + username;
    string myText;

    if(choice == 1){
        path = path + string("\\\\reading.txt");
        fileReader.open(path.c_str());
        cout<<endl<<"Reading list:"<<endl;
        while (getline (fileReader, myText)) {      // Output the text from the file
            cout <<i<<"."<< myText<<endl;
            i++;
        }
        fileReader.close();
    }
    else if(choice == 2){
        path = path + string("\\\\completed.txt");
        fileReader.open(path.c_str());
        cout<<endl<<"Completed list:"<<endl;
        while (getline(fileReader, myText)) {      // Output the text from the file
            cout <<i<<"."<< myText<<endl;
            i++;
        }
        fileReader.close();
    }
    else if(choice == 3){
        path = path + string("\\\\share.txt");
        fileReader.open(path.c_str());
        cout<<endl<<"Share list:"<<endl;
        while (getline(fileReader, myText)) {      // Output the text from the file
            cout <<i<<"."<< myText<<endl;
            i++;
        }
        fileReader.close();
    }
    else{
        cout<<"Invalid choice,unable to read";
    }
}
