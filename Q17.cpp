// Lab Sheet-07, Question 17
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main(){char s[1000],r[1000];cout<<"Enter string: ";cin.getline(s,1000);int j=0;for(size_t i=0;i<strlen(s);i++){char c=tolower((unsigned char)s[i]);if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u')r[j++]=s[i];}r[j]='\0';cout<<"Without vowels = "<<r<<'\n';}
