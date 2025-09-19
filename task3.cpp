#include<iostream>
using namespace std;
void analyze_pointer(int *ptr){
    cout<<"Pointer points to memory address "<< ptr<<endl;
    cout<<"Pointer stores value: "<<*ptr<<endl;
}
int main(){
    int p=30;
    analyze_pointer(&p);
    int *p2=new int (32);
    analyze_pointer(p2);

    return 0;
    
}