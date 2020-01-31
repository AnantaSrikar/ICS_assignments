#include<stdio.h>
int main()
{
    int size, dt, sm;
    
    scanf("%d, %d", &dt, &sm);
    switch(dt)
    {
        case 0:    
            switch(sm)
            {
                case -1:
                    size = sizeof(int);   
                    printf("%d", size);
                    break;

                case 0:
                    size = sizeof(long int);
                    printf("%d", size);
                    break;

                case 1:
                    size = sizeof(short int);
                    printf("%d", size);
                    break;

                case 2:
                    size = sizeof(unsigned int);
                    printf("%d", size);
                    break;
            
                case 3: 
                    size = sizeof(signed int);
                    printf("%d", size);
                    break;
            
                default:
                    printf("ERROR");
            }
        
        break;

        case 1:
            switch(sm)
            {
                case -1:
                    size = sizeof(char);   
                    printf("%d", size);
                    break;

                case 0:
                    // size = sizeof(long char); not possible
                    printf("ERROR");
                    break;

                case 1:
                    // size = sizeof(short char); not possible
                    printf("ERROR");
                    break;

                case 2:
                    size = sizeof(unsigned char);
                    printf("%d", size);
                    break;
            
                case 3: 
                    size = sizeof(signed char);
                    printf("%d", size);
                    break;
            
                default:
                    printf("ERROR");
            }

        break;

        case 2:
            switch(sm)
            {
                case -1:
                    size = sizeof(float);   
                    printf("%d", size);
                    break;

                case 0:
                    //size = sizeof(long float); not possible
                    printf("ERROR");
                    break;

                case 1:
                    //size = sizeof(short float); not possible
                    printf("ERROR");
                    break;

                case 2:
                    //size = sizeof(unsigned float); not possible
                    printf("ERROR");
                    break;
            
                case 3: 
                    //size = sizeof(signed float); not possible
                    printf("ERROR");
                    break;
            
                default:
                    printf("ERROR");
            }

        break;

        case 3:
            switch(sm)
            {
                case -1:
                    size = sizeof(double);   
                    printf("%d", size);
                    break;

                case 0:
                    size = sizeof(long double);
                    printf("%d", size);
                    break;

                case 1:
                    //size = sizeof(short double); not possible
                    printf("ERROR");
                    break;

                case 2:
                    //size = sizeof(unsigned double); not possible
                    printf("ERROR");
                    break;
            
                case 3: 
                    //size = sizeof(signed double); not possible
                    printf("ERROR");
                    break;
            
                default:
                    printf("Option not given to you");
            }

        break;

        default:
            printf("Option not given to you");
    }

    return(0);
}
