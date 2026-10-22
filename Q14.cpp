// Lab Sheet-07, Question 14
#include <iostream>
#include <cstring>
using namespace std;
int main(){char s[500],sub[200];cout<<"Main string: ";cin.getline(s,500);cout<<"Substring: ";cin.getline(sub,200);char*p=strstr(s,sub);if(p)cout<<"Found at position "<<p-s+1<<'\n';else cout<<"Substring not found.\n";}
