#include<iostream>
using namespace std;


int main(){
    char name[100];
    int x=0;
    cout<<"enter your name and surname: ";
cin.get(name,100);
cout << name<<endl;

for(int i=0;i<100;i++){
    if(name[i]!='\0'){
        x++;
        cout << name[i] << x<< endl;
    }
}
cout<<"number of characters in the name are:"<<endl;
cout<<x;





}
