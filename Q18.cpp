// Lab Sheet-07, Question 18
#include <iostream>
#include <cstring>
using namespace std;
int main(){char s[500],d[6];cout<<"Enter string: ";cin.getline(s,500);strncpy(d,s,5);d[5]='\0';cout<<"First five characters = "<<d<<'\n';}
