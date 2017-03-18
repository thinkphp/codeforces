#include <stdio.h>

int main() {

    int n,
        a = 0,
        d = 0;
    char ch;

    scanf("%d\n",&n); 

    while(n--) {

          scanf("%c",&ch);

          if(ch == 'A') a++;

             else 
                        d++; 
    }      

    if( a == d ) printf("Friendship\n");

        else if( a > d ) printf("Anton\n");

              else printf("Danik\n");

return(0);
}