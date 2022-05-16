#include<iostream>
using namespace std;

enum EyeColor {Brown,Green,Blue,Black,Other};  // no need = sign

int main(){
    
    EyeColor eyeColor = Brown;

    switch (eyeColor)
    {
    case Brown:
        cout<<"80% People have brown eyes"<<endl;
        break;
    
    case Green:
        cout<<"10% People have green eyes"<<endl;
        break;
    
    case Blue:
        cout<<"2% People have blue eyes"<<endl;
        break;
    
    case Black:
        cout<<"1% People have black eyes"<<endl;
        break;
      
    case Other:
        cout<<"7% People have some other color eyes"<<endl;
        break;
    
    default:
        cout<<"You have rare eye color"<<endl;
        break;
    }
}