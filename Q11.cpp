// Lab Sheet-07, Question 11
#include <iostream>
#include <cstring>
using namespace std;
char* strrev(char* s){size_t l=0,r=strlen(s);if(!r)return s;--r;while(l<r){char t=s[l];s[l++]=s[r];s[r--]=t;}return s;}
int main(){char s[500],r[500];cout<<"Enter string: ";cin.getline(s,500);strcpy(r,s);strrev(r);cout<<(strcmp(s,r)==0?"Palindrome.\n":"Not a palindrome.\n");}
