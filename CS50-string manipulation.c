#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *s=get_string("S:");

    char t[(strlen(s)+1)];
    for(int i=0,n=strlen(s);i<=n;i++)
    {
        t[i]=s[i];
    }
    t[0]=toupper(t[0]);
    printf("%s\n",s);
    printf("%s\n",t);
}

