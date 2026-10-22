// Lab Sheet-07, Question 20
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main(){char a[500],b[500];cout<<"First string: ";cin.getline(a,500);cout<<"Second string: ";cin.getline(b,500);int f[256]={};for(size_t i=0;i<strlen(a);i++){unsigned char c=a[i];if(!isspace(c))f[tolower(c)]++;}for(size_t i=0;i<strlen(b);i++){unsigned char c=b[i];if(!isspace(c))f[tolower(c)]--;}bool ok=true;for(int x:f)if(x){ok=false;break;}cout<<(ok?"Strings are anagrams (ignoring case and spaces).\n":"Strings are not anagrams.\n");}
