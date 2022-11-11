#include <stdio.h>
#include <string.h>

int main()
{
 int T;
 scanf("%d",&T);
for (int i=0; i<T;i++){
 char n[50];
	    scanf("%s",&n);
	    int a=0,b=0;
	    int l=strlen(n);
	        for(int i=0;i<l;i++){
	            if(n[i]=='0')
	                b++;
	            else
	                a++;
	        }
	    if(a==1 || b==1)
	        printf("Yes\n");
	    else
	        printf("No\n");
}
return 0;
}
