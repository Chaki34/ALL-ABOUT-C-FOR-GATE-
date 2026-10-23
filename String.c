#include<stdio.h>
#include<string.h>

int main(void){

    //char str[] = "Debmalya";
    //printf("this is my name  : %s\n",str);

    // take name and address

    char name[100] ;
    char address[100] ;

    printf("Enter your  Name : ");
    fgets(name,sizeof(name),stdin); // it also consider spaces  

     printf("Enter your  Address : ");
    fgets(address,sizeof(address),stdin);

    printf("Name is  : %s\n",name);
    printf("Address is %s\n",address);

    // access idx of string  

    printf("2th idx char from  name %c\n",name[2]);


    // update first char 

    name[0] = 'D';
    printf("%s\n",name);

    // length  

    printf("%d\n",strlen(name));
    
    // scannet  - Read until new line  
    printf("Enter your new  name  :");
    scanf("%19[^\n]",name);
    printf("%s\n",name);
    return 0;

}