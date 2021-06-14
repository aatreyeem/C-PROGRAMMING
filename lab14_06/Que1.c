#include<stdio.h>


int main()
{
    char ch;
    printf("Enter any alphabet:\n");
    scanf("%c" , &ch);
    switch (ch)
    {
    case 'A':
        printf("Entered alphabet is a vowel." ,ch);
        break;
    case 'E':
        printf("Entered alphabet is a vowel.\n" ,ch);
        break;
    case 'I':
        printf("Entered alphabet is a vowel.\n" ,ch);
        break;
    case 'O':
        printf("Entered alphabet is a vowel.\n" ,ch);
        break;
    case 'U':
        printf("Entered alphabet is a vowel.\n" ,ch);
        break;
    case 'a':
        printf("Entered alphabet is a vowel.\n" ,ch);
        break;
    case 'e':
        printf("Entered alphabet is a vowel.\n" ,ch);
        break;
    case 'i':
        printf("Entered alphabet is a vowel.\n" ,ch);
        break;
    case 'o':
        printf("Entered alphabet is a vowel.\n" ,ch);
        break;
    case 'u':
        printf("Entered alphabet is a vowel.\n" ,ch);
        break;
    
    default:
    printf("Entered alphabet is a consonant.\n");
        break;
    }
    
    return 0;
}
