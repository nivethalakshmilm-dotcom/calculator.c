#include<stdio.h>
int main()
{
    FILE *FP;
    char buffer[1000];
    FP = fopen("FEEDBACK.txt","w");
    if (FP == NULL)
    {
       printf("File does not extst");
       return 0;
    }
       fprintf(FP,"FEEDBACK OF C PROGRAMMING\n");
       fprintf(FP,"1.Found difficulties in usin TURBO C\n");
       fprintf(FP,"2.Easy to understand the theory part\n");
       fprintf(FP,"3.A little bit difficulty to perform a code\n");
       fprintf(FP,"4.Difficulties to correct the errors\n");
       fprintf(FP,"5.Difficulties because of pointers errors\n");
    fclose(FP);
    FP=fopen("FEEDBACK.txt","a");
    if (FP==NULL)
    {
       printf("File does not exist");
       return 0;
    }
       fprintf(FP,"FEEDBACK ABOUT C TRAINER\n");
       fprintf(FP,"1.The trainer clearly explains the theory part\n");
       fprintf(FP,"2.Concepts are taught step by step\n");
       fprintf(FP,"3.Doubts in erreors are cleared by the trainer very clearly\n");
       fprintf(FP,"4.Because of more no. of students it takes much time for the trainer to clear the doubts\n");
       fpeintf(FP,"5.Basic concepts are taught step by step\n");
    fclose(FP);
    FP=fopen("FEEDBACK.txt","r");
    if (FP==NULL)
    {
       printf("File does not exist");
       return 0;
    }
    while(fgets(buffer, sizeof(buffer),FP)!=NULL)
    {
       printf("%s",buffer);
    }
    fclose(FP);
    return 0;
    }




