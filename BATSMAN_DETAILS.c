#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int option;
void insert();
void display();




struct Batsman
{
char Batsman_Name[15];
int Batsman_Score[2][9];
struct Batsman *next;
}*head=NULL,*temp=NULL,*new_node=NULL;



int main()
{
printf(" \n \n**************----- SCORECARD ------******************* \n");
b:printf("\n \n");
printf("1->ENTER_BATSMAN_DETAIL \n2->DISPLAY BATSMAN DETAILS \n");
scanf("%d",&option);
  if(option==1)
   {
    insert();
     goto b;
     }
      else if(option==2)
       {
        display();
         goto b;
         
        }
 
 
 
} 
 
 
 
 
 void insert()
 {
  
  new_node=(struct Batsman *)malloc(sizeof(struct Batsman));
  printf("\nENTER THE BATSMAN_NAME:");
  scanf("%s",new_node->Batsman_Name);
  printf("ENTER THE BATSMAN NO:");
  scanf("%d",&new_node->Batsman_Score[1][1]);
  
  
  printf("\n..... ENTER THE DETAILS .....\n");
    printf("ENTER THE ONE'S SCORED:");
    scanf("%d",&new_node->Batsman_Score[1][2]);
    
    
    printf("ENTER THE TWO'S SCORED:");
    scanf("%d",&new_node->Batsman_Score[1][3]);
    
    
     printf("ENTER THE THREE'S SCORED:");
    scanf("%d",&new_node->Batsman_Score[1][4]);
   
    
    printf("ENTER THE FOUR'S SCORED:");
    scanf("%d",&new_node->Batsman_Score[1][5]);
    

    
    printf("ENTER THE SIX SCORED:");
    scanf("%d",&new_node->Batsman_Score[1][6]);
     
     
     
     printf("ENTER THE NUMBER OF BALLS FACED SCORED:");
    scanf("%d",&new_node->Batsman_Score[1][7]);
      
  new_node->next=NULL;
  if(head==NULL)
   {
    head=new_node;
   }
   else
   {
   temp=head;
   while(temp->next!=NULL)
         {
         temp=temp->next;
          }
        temp->next=new_node;
        new_node->next=NULL;  
   
   }
}



void display()
{


if(head==NULL)printf("NO LIST\n");
else
{
temp=head;

printf("\n*************BATSMAN_DETAILS*************************\n \n___Name______      __NO__      __1's__      __2's__      __ 3's___      __4's__     __ 6's___   ___BALLS FACED___\n\n");
 while(temp->next!=NULL)
 {
   printf("%-20s%-13d%-13d%-13d%-15d%-14d%-15d%d",temp->Batsman_Name,temp->Batsman_Score[1][1],temp->Batsman_Score[1][2],temp->Batsman_Score[1][3],temp->Batsman_Score[1][4],temp->Batsman_Score[1][5],temp->Batsman_Score[1][6],temp->Batsman_Score[1][7]); 
  temp=temp->next;
  printf("\n");
 }
  printf("%-20s%-13d%-13d%-13d%-15d%-14d%-15d%d",temp->Batsman_Name,temp->Batsman_Score[1][1],temp->Batsman_Score[1][2],temp->Batsman_Score[1][3],temp->Batsman_Score[1][4],temp->Batsman_Score[1][5],temp->Batsman_Score[1][6],temp->Batsman_Score[1][7]); 

  printf("\n");   


    
    // to print data in first node and last node
 
}
}
  
   
 
 
 
 
 

