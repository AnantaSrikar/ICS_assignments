#include<stdio.h>
int main()
{
    int size, dt, sm;
    printf("Available Data types: int (0), char (1), float (2), double (3)\nSize modifier: none (-1), long (0), short (1), unsigned (2), signed (3)\n");
    printf("Enter the Data type and Size modifier : \n");
    scanf("%d%d", &dt, &sm);
    switch(dt)
    {
        case 0:    
            switch(sm)
            {
                case -1:
                    size = sizeof(int);   
                    printf("%d\n", size);
                    break;

                case 0:
                    size = sizeof(long int);
                    printf("%d\n", size);
                    break;

                case 1:
                    size = sizeof(short int);
                    printf("%d\n", size);
                    break;

                case 2:
                    size = sizeof(unsigned int);
                    printf("%d\n", size);
                    break;
            
                case 3: 
                    size = sizeof(signed int);
                    printf("%d\n", size);
                    break;
            
                default:
                    printf("Option not given to you\n");
            }
        
        break;

        case 1:
            switch(sm)
            {
                case -1:
                    size = sizeof(char);   
                    printf("%d\n", size);
                    break;

                case 0:
                    // size = sizeof(long char); not possible
                    printf("ERROR\n");
                    break;

                case 1:
                    // size = sizeof(short char); not possible
                    printf("ERROR\n");
                    break;

                case 2:
                    size = sizeof(unsigned char);
                    printf("%d\n", size);
                    break;
            
                case 3: 
                    size = sizeof(signed char);
                    printf("%d\n", size);
                    break;
            
                default:
                    printf("Option not given to you\n");
            }

        break;

        case 2:
            switch(sm)
            {
                case -1:
                    size = sizeof(float);   
                    printf("%d\n", size);
                    break;

                case 0:
                    //size = sizeof(long float); not possible
                    printf("ERROR\n");
                    break;

                case 1:
                    //size = sizeof(short float); not possible
                    printf("ERROR\n");
                    break;

                case 2:
                    //size = sizeof(unsigned float); not possible
                    printf("ERROR\n");
                    break;
            
                case 3: 
                    //size = sizeof(signed float); not possible
                    printf("ERROR\n");
                    break;
            
                default:
                    printf("Option not given to you\n");
            }

        break;

        case 3:
            switch(sm)
            {
                case -1:
                    size = sizeof(double);   
                    printf("%d\n", size);
                    break;

                case 0:
                    size = sizeof(long double);
                    printf("%d\n", size);
                    break;

                case 1:
                    //size = sizeof(short double); not possible
                    printf("ERROR\n");
                    break;

                case 2:
                    //size = sizeof(unsigned double); not possible
                    printf("ERROR\n");
                    break;
            
                case 3: 
                    //size = sizeof(signed double); not possible
                    printf("ERROR\n");
                    break;
            
                default:
                    printf("Option not given to you\n");
            }

        break;

        default:
            printf("Option not given to you\n");
    }

    return(0);
}