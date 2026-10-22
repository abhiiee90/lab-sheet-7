// Lab Sheet-07, Question 7
#include <iostream>
#include <cstring>
using namespace std;
int main(){char a[500],b[500];cout<<"First string: ";cin.getline(a,500);cout<<"Second string: ";cin.getline(b,500);int r=strcmp(a,b);if(r==0)cout<<"Strings are equal.\n";else if(r<0)cout<<"First string comes before second.\n";else cout<<"First string comes after second.\n";}
