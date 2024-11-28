#include <iostream>
#include <cstring>
using namespace std;

bool strongpwdfunc(string password){

    //Set the minimum length of the password
    if(password.length()<8){
        return false;
    }

    //Initialize the password conditions
    bool upperCase=false;
    bool lowerCase=false;
    bool digit=false;

    /*Now check each character in the password if it satisfies the condtn,
    loop through all characters*/
    for(char c: password){
        if(c>='0' && c<='9'){
            digit=true;
        }
        else if(c>='a' && c<='z'){
        lowerCase=true;
        }
        else if(c>='A' && c<='Z'){
            upperCase=true;
        }
    }

    //Check if all conditions are met
    if(upperCase && lowerCase && digit){
        return true;
    }

    return false;

}

int main(){
    string password;
    
    //Prompt the user to enter the password
    cout<<"Enter the strong Password: ";
    cin>>password;
    cout<<endl;

    if(strongpwdfunc(password)){
        cout<<"The password is STRONG!" <<endl;
    }
    else{
         cout << "The password is not strong. It should be at least 8 characters and contain at least one digit, one lowercase letter, and one uppercase letter." << endl;
    }
    return 0;
}