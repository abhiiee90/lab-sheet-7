// Lab Sheet-07, Question 2
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main(){char s[500]; cout<<"Enter string: "; cin.getline(s,500); int n=0; for(size_t i=0;i<strlen(s);i++){char c=tolower((unsigned char)s[i]); if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')n++;} cout<<"Vowels = "<<n<<'\n';}
