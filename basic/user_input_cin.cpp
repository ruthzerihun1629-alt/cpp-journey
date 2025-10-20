#include<iostream>
using namespace std;
int main(){
    string name;
    int age;
      cout<<"what is your age:";
    cin>>age;
    cout<<"what is your name:";
    getline(cin >>ws, name);
    
    cout<<"my name is "<< name <<" i am "<< age<<" years old.";
    return 0;
}