// Lab Sheet-07, Question 9
#include <iostream>
#include <cstring>
using namespace std;
int main(){int n;cout<<"Number of strings (1-50): ";cin>>n;if(n<1||n>50)return 0;cin.ignore(10000,'\n');char a[50][100];for(int i=0;i<n;i++){cout<<"String "<<i+1<<": ";cin.getline(a[i],100);}for(int p=0;p<n-1;p++)for(int i=0;i<n-p-1;i++)if(strcmp(a[i],a[i+1])>0){char t[100];strcpy(t,a[i]);strcpy(a[i],a[i+1]);strcpy(a[i+1],t);}for(int i=0;i<n;i++)cout<<a[i]<<'\n';}
