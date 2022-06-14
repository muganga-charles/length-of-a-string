#include <stdio.h>
#include <stdlib.h>

int main()
{ int length=0;// intializes the message
    printf("enter the message : ");// allows a user to enter the string
    while(getchar() != '\n')
        length++;//increaments the size as the loop
    printf("your message is %d characters\n ", length);//shows the size of the string entered
    return 0;
}
