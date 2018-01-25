#include <stdio.h>
int main()
{
    char k;
    int isLowercaseVowel, isUppercaseVowel;
    printf("Enter an character: ");
    scanf("%c",&k);
    isLowercaseVowel = (k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u');
    isUppercaseVowel = (k == 'A' || k == 'E' || k == 'I' || k == 'O' || k == 'U');
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.", k);
    else
        printf("%c is a consonant.", k);
    return 0;
}
