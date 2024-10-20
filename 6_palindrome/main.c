#include <stdio.h>
#include <string.h>
int main()
{
    char word[22]="popop", temp;
    char a[22];
    strcpy(a , word);//strcpy(cpy des, cpy src);
    int n = strlen(word);
    for(int i=0 ; i < n ; i++)
    {
        temp = word[i];
        word[i]= word[n-1];
        word[n-1] = temp;
        n= n-1;
    }
    printf (" The reverse of the original string is: %s ",  a);  
    puts(word);
   if (strcmp(a, word) == 0) {
        printf("Both arrays are equal.\n");
    } else {
        printf("Arrays are not equal.\n");
    }
    return 0;
}