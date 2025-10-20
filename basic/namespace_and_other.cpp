#include<iostream>
namespace first{
    int x=3;
}
typedef std::string text_t;
int main(){
using  std::cout;
int x=2;
double y=(int)3.14;
 text_t name="ruth";
cout<<x <<'\n'<< first::x <<'\n'<< name<<'\n';
cout<<y << (char)120<<'\n';
int mark=8;
int question=15;
double result=mark/(double)question*100;
cout<<result<<"%";
return 0;
}