// Lab Sheet-07, Question 12
#include <iostream>
#include <cstring>
using namespace std;
int main(){char s[500],c;cout<<"Enter string: ";cin.getline(s,500);cout<<"Character: ";cin>>c;char*p=strchr(s,c);if(p)cout<<"First occurrence position = "<<p-s+1<<'\n';else cout<<"Character not found.\n";}
