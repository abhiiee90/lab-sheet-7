// Lab Sheet-07, Question 8
#include <iostream>
#include <cstring>
using namespace std;
int main(){char a[500],b[500];cout<<"First string: ";cin.getline(a,500);cout<<"Second string: ";cin.getline(b,500);cout<<(strcmp(a,b)==0?"Equal (case-sensitive).\n":"Not equal (case-sensitive).\n");}
