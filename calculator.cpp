#include<iostream>
using namespace std;

int main() {
 
  int a,b,c;
  char op;
  
  cout<<"enter a"<<endl ;
  cin>>a ;
   cout<<"enter b"<<endl ;
  cin>>b ;
  cout<<"enter operator" ;
  cin>>op ;

  if (op=='+') {
    cout<<"a+b="<<a+b<<endl;
  } else if (op=='-'){
    cout<<"a-b="<<a-b<<endl;
  } else if (op=='*'){
    cout<<"a*b="<<a*b<<endl;
  } else if (op=='/'){
    cout<<"a/b="<<a/b<<endl;
  } else{
    cout<<"invalid";
  }
  
   return 0;
}