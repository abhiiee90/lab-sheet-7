// Lab Sheet-07, Question 10
#include <iostream>
#include <cstring>
using namespace std;
// strrev is non-standard; this helper provides the same behavior.
char* strrev(char* s){size_t l=0,r=strlen(s);if(!r)return s;--r;while(l<r){char t=s[l];s[l++]=s[r];s[r--]=t;}return s;}
int main(){char s[500];cout<<"Enter string: ";cin.getline(s,500);cout<<"Reversed = "<<strrev(s)<<'\n';}
