#include <stdio.h>
struct student
{
     char name[20];
     int rollno;
     char contactno[15];
     char branch[20];
     char bloodgroup[15];
     char collegename[30];
};
     void read(struct student s[],int n);
     void write(struct student s[],int n);
     int main()
     {
     struct student s[100];
     int n;
     printf("Enter number of students: ");
     scanf("%d",&n);
     read (s,n);
     write (s,n);
     return 0;
     }
     void read(struct student s[],int n)
     {
     int i;
     for(i=0;i<n;i++)
     {
     printf("\n DETAILS OF STUDENTS %s\n",i+1);
     printf("Enter Name: ");
     scanf("%s",&s[i].name);
     printf("Enter Roll Number: ");
     scanf("%d",&s[i].rollno);
     printf("Enter  Branch: ");
     scanf("%s",&s[i].branch);
     printf("Enter contact Number: ");
     scanf("%s",&s[i].contactno);
     printf("Enter Blood Group: ");
     scanf("%s",&s[i].bloodgroup);
     printf("Enter College Name: ");
     scanf("%s",&s[i].collegename);
     }
     }
     void write(struct student s[],int n)
     {
     int i;
     printf("\n------STUDENT DETAILS------\n");
     for(i=0;i<n;i++)
     {
     printf("\nstudent%d\n",i+1);

     printf("Name: %s\n",s[i].name);
     printf("Rollno: %d\n",s[i].rollno);
     printf("Branch: %s\n",s[i].branch);
     printf("contactno: %s\n",s[i].contactno);
     printf("Blood Group: %s\n",s[i].bloodgroup);
     printf("College Name: %s\n",s[i].collegename);
     }
     }