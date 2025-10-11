#include<iostream>
namespace first{
    double gpa =3.1;
}
//typedef std::string text_t;
//using text_t= std::string;
int main(){
 int student= 15+45-1*4/3;
char symbol='$';
const bool question= true;
double gpa=2.8;
float price=66.54;

std::cout<<"hello " << " your gpa is " <<first::gpa <<" it is " << question <<" the price is " << price << symbol; 
//student+=1;
int reminder= student % 2;
std::cout<<reminder; 
std::cout<<student;
std::string name;
std::cout<<"what is your name:";
std::cin>>name;
std::cout<<"hii "<< name;
return 0;
}