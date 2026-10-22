// Lab Sheet-07, Question 4
#include <iostream>
#include <cstring>
using namespace std;
int main(){char a[500],b[500],c[500]; cout<<"First string: ";cin.getline(a,500);cout<<"Second string: ";cin.getline(b,500);strcpy(c,a);cout<<(strcmp(c,b)==0?"Strings are equal.\n":"Strings are not equal.\n");}
