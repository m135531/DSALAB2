#include <iostream>
#include<cstring>
using namespace std;
int main(){
int size;
cout << "Enter length of string"<<endl;
cin>>size;
char* strinput= new char [size+1];
cin>>strinput;
int len= strlen(strinput);
for (int i=0;i<len/2; i++){
    char temp=strinput[i];
    strinput[i]=strinput[size-i-1];
    strinput[size-i-1]=temp;
    cout<<endl;
}

cout<<strinput;

delete strinput;
return 0;
}