#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(int argc, string argv[])
{
    if (argc == 1)
    {
        printf("you must enter mor than one world");//if user enter just one argument
        return 1 ;
    }
    
    if (argc > 1)//if user enter more than one argument the program will work like this
    {   
        string text = get_string("enter text : ");//masseg tell
        
        int key = atoi(argv[1]), length = strlen(text);
           
        char asend[length + 1];
               
        for (int i = 0 ; i < length ; i++)
        { 
            int c = text[i];
        
            if (c >= 'A' && c <= 'Z') //loop for upper case 
            {
                asend[i] = ((c - 'A') + key) % 26 + 'A';                 
            }
        
            else if (c >= 'a' && c <= 'z') //loop for lower case 
            {
                asend[i] = ((c - 'a') + key) % 26 + 'a';
            }
          
            else //if not letter
            {   
                asend[i] = c;
            }
              
        
        }
        asend[length] = '\0';
        printf("ciphertext: %s\n", asend);//the cipher text
    
    }
    
    
}


