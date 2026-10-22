// Lab Sheet-07, Question 16
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main(){char s[1000];cout<<"Enter sentence: ";cin.getline(s,1000);int words=0;bool in=false;for(size_t i=0;i<strlen(s);i++){if(!isspace((unsigned char)s[i])){if(!in)words++;in=true;}else in=false;}cout<<"Word count = "<<words<<'\n';}
