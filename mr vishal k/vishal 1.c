#include <stdio.h>
int main()
{


    float Hindi ,English ,Math ,Scince ,Socialscince ,Sinskret;
    printf("Enter The markes of Hindi :");
    scanf("%f",&Hindi);
    printf("Enter The markes of English :");
    scanf("%f",&English);
    printf("Enter The markes of Math :");
    scanf("%f",&Math);
    printf("Enter The markes of Scince :");
    scanf("%f",&Scince);
    printf("Enter The markes of Socialscince :");
    scanf("%f",&Socialscince);
    printf("Enter The markes of Sinskret :");
    scanf("%f",&Sinskret);
    
printf("\n                                Reselt of class 10\n                               vidya niketan school\n                                 chhotisadri(raj.)");
    printf("\n\nName of subject                                               markes");
    printf("\nTotal markes in Hindi :                                        %.0f",Hindi);
    printf("\nTotal markes in English :                                      %.0f",English);
    printf("\nTotal markes in Math :                                         %.0f",Math);
    printf("\nTotal markes in Scince :                                       %.0f" ,Scince);
    printf("\nTotal markes in Socialscince :                                 %.0f",Socialscince);
    printf("\nTotal markes in Sinskret :                                     %.0f",Sinskret);
    float Total= Hindi+English+Math+Scince+Socialscince+Sinskret;
    float percentage = (Total/600)*100;
    printf("\nTotal markes = 600");
    printf("\n\n\n\n\n\nTotal archive markes : %.0f",Total);
    printf("\nTotal percentage     : %.2f",percentage);
    if (percentage > 33.0)
    {
    printf("\n                      pass");
    }
    
    else
    {
    
    printf("\n                      fall");
    }

return 0;
}
