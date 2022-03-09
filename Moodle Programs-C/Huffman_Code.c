#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i;
  	
  	int len[26] = {0}; 
 
  	scanf("%[^\n]s",str);
  	
  	
  	for(i=0; str[i] != '\0'; i++)
  	{
  		if(str[i]>='a' && str[i] <='z')
  		{
  			len[str[i] - 'a']++;
		}
  		else if(str[i]>='A' && str[i]<='Z')
  		{
  			len[str[i] - 'A']++;
		}
	}
  		
  	for(i=0; i<26; i++)
  	{
		if(len[i] != 0)
		{
			printf("%c %d\n", i+'a', len[i]);
		}
	}
	

}
