// Lab Sheet-07, Question 13
#include <iostream>
#include <cstring>
using namespace std;
int main(){char s[500],c;cout<<"Enter string: ";cin.getline(s,500);cout<<"Character: ";cin>>c;char*p=strrchr(s,c);if(p)cout<<"Last occurrence position = "<<p-s+1<<'\n';else cout<<"Character not found.\n";}
