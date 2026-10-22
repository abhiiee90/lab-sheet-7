// Lab Sheet-07, Question 6
#include <iostream>
#include <cstring>
using namespace std;
int main(){char a[500],b[250];cout<<"First name: ";cin.getline(a,500);cout<<"Last name: ";cin.getline(b,250);strcat(a," ");strcat(a,b);cout<<"Full name = "<<a<<'\n';}
