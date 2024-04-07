

#include <cstdlib> 
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name = "";
    string color = "";
    string number = "";
    string object = "";
    cout << "Welcome to password generator!" << endl; 
    cout<<"Please enter your name:" << endl;
    cin>>name;
    
    cout<< "Please enter your favorite color: "<< endl; 
    cin >> color; 
    
    cout << "Please enter your favorite number: "<< endl; 
    cin >> number; 
    
    cout << "Please enter an object that is in your view right now: "<<endl; 
    cin >> object;
    
    cout << "Your new password is: " << name[rand() % name.length()] << color[rand() % name.length()] << name[rand() % name.length()] << color[rand() % name.length()] << number << color[rand() % name.length()] << object << endl; 
    
    return 0;
}
