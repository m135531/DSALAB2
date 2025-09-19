#include<iostream>
using namespace std;
int main()
{
int size;
int* salArray= new int[size];
cout<<"Enter size"<<endl;
cin>>size;
for (int i=0;i<size;++i)
{
cout<<"Enter Salary: ";
cin>>salArray[i];
cout<<endl;
}
//increment
for (int i=0;i<size;++i){
salArray[i]=salArray[i]+salArray[i]/(i+1);
cout<<endl;
}
//display
for (int i=0;i<size;i++){
    cout<<salArray[i]<<endl;
}

delete [] salArray;
return 0;

}