#include<iostream>
#include<cstring>
using namespace std;
int main()

{
	char s1[20]="Good";
	char s2[10]=" Morning";
	
	strcat(s1,s2);
	
	cout<<s1<<endl;
	
	return 0;
	
}
/*
{
	char s1[20]="Good";
	char s2[10]="Morning";
	
	strncat(s1,s2,3);
	
	cout<<s1<<endl;
	
	return 0;
	
}
*/
