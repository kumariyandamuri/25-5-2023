//wap to reverse the given string and print both strings 
//means reversed string and original stringin seprate line
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int rev=0;
	printf("Enter a string");
	gets(str);
	printf("\nGIVEN string: %s",str);
	
	strrev(str);
	
	printf("\nREVERSED STRING: %s",str);
	return 0;
	
	
}
