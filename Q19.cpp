// Lab Sheet-07, Question 19
#include <iostream>
#include <cstring>
using namespace std;
int main(){char sentence[1500]="",part[400];int n;cout<<"Number of parts (1-10): ";cin>>n;cin.ignore(10000,'\n');if(n<1||n>10){cout<<"Invalid count.\n";return 0;}for(int i=0;i<n;i++){cout<<"Enter part "<<i+1<<": ";cin.getline(part,400);if(i)strcat(sentence," ");strcat(sentence,part);}cout<<"Sentence = "<<sentence<<'\n';}
