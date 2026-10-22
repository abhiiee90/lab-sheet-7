// Lab Sheet-07, Question 15
#include <iostream>
#include <cstring>
using namespace std;
int main(){char s[500],sub[200];cout<<"Main string: ";cin.getline(s,500);cout<<"String to search: ";cin.getline(sub,200);cout<<(strstr(s,sub)?"String is present.\n":"String is not present.\n");}
