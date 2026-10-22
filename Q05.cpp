// Lab Sheet-07, Question 5
#include <iostream>
#include <cstring>
using namespace std;
int main(){char a[1000],b[500];cout<<"First string: ";cin.getline(a,1000);cout<<"Second string: ";cin.getline(b,500);strcat(a,b);cout<<"Concatenated = "<<a<<'\n';}
