
#include<stdio.h>
#include<cs50.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>



int main(int argc, string argv[])
{
    if(argc==2)
    {

        int key = atoi(argv[1]);
        int argumentIsNumber = 1;
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isdigit(argv[1][i]) == 0) 
            {
                argumentIsNumber = 0;
            }
        }

        if (argumentIsNumber == 0) {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        /*if (key==0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        */
        string plntxt = get_string("Plaintext: ");
        
        printf("ciphertext: ");
        
        for (int i=0; plntxt[i] != '\0'; i++)
        {
            char A = (char)plntxt[i];
            if (((A>64) && (A<91)) || ((A>96) && (A<123)))
            {
                if (((A)>64) && ((A)<91))
                {
                    A = 65 + ((A+key-65) % 26);
                }

                else //if( ((int)(A-key)>96) && ((int)(A-key)<123) )
                {
                    A = 97 + ((A+key-97) % 26);
                }
                printf("%c",A);
            }
            else
            {
                printf("%c",A);
            }
        }
        printf("\n");
    }

    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}

