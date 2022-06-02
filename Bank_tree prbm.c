#include <stdio.h>
#include <stdlib.h>

struct bank {
  struct dict *left,*right;
  char acc_name[10],bank_type[20];
}*Root=NULL;

typedef struct bank bank_acc;
int check(char[],char[]);
void insert(bank_acc *);
void Search();
void view(bank_acc *);

int check(char a[],char b[]){
     int i,j,c;
     for(i=0,j=0 ; a[i]!='\0'&&b[j]!='\0' ; i++,j++){
       if(a[i]>b[j]){
         c=1;
         break;
       }
        else if(b[j]>a[i]){
          c=-1;
          break;
        }
      else
         c=0;
     }
     if(c==1)
       return 1;
      else if(c==-1)
        return -1;
      else
        return 0;
}

void Search(){
  int flag=0;
  bank_acc *ptr;
  ptr=Root;
  char w[10];
  printf("\nEnter account holder name");
  scanf("%s",w);
  while(ptr!=NULL && flag==0){
    if(check(w,ptr->acc_name)>0)
       ptr=ptr->right;
    else if(check(w,ptr->acc_name)<0)
          ptr=ptr->left;
    else if(check(w,ptr->acc_name)==0){
       flag=1;
       printf("bank account type\n%s",ptr->bank_type);
    }

    }
    if(flag==0)
      printf("\nbank account not found");
}

void insert(bank_acc *temp){
  int flag=0;
  bank_acc *ptr,*par;
  ptr=Root;

  if(Root==NULL)
     Root=temp;
  else{
     while(ptr!=NULL ){
       if(check(temp->acc_name,ptr->acc_name)>0){
         par=ptr;
         ptr=ptr->right;
       }

       else if(check(temp->acc_name,ptr->acc_name)<0)
     {
       par=ptr;
       ptr=ptr->left;
     }
       else if(check(temp->acc_name,ptr->acc_name)==0){
          flag=1;
            printf("\nWord exists!!");
          break;
       }

   }
       if(flag==0 && ptr==NULL){

         if(check(par->acc_name,temp->acc_name)==1)
            par->left=temp;
         else if(check(par->acc_name,temp->acc_name)==-1)
            par->right=temp;
       }

     }

}

void disp(bank_acc *ptr){
  if(Root==NULL)
    printf("\nEmpty bank account\n");

  else if(ptr !=NULL){
   disp(ptr->left);

   printf("\nBank account name:%s\n",ptr->acc_name);
   printf("\ntype of bank account:%s\n",ptr->bank_type);

   disp(ptr->right);
  }

}

int main(int argc, char const *argv[]) {
  int ch;
  bank_acc *temp;
  while(ch!=4){
    printf("\n CHOICES \n1.Search bank account \n2.Insert bank account\n3.display all bank accounts\n4.Search using account type \n5.Exit\n\nEnter your choice");
    scanf("%d",&ch);
    switch (ch) {
      case 1: Search();break;
      case 2:
      temp=(bank_acc*)malloc(sizeof(bank_acc));
      temp->left=NULL;
      temp->right=NULL;
      printf("\nInsert bank account name:\n");
      scanf("%s",temp->acc_name);
      printf("\nInsert bank account type:\n");
      scanf("%s",temp->bank_type);
       insert(temp);
      break;
      case 3:
      disp(Root);
      break;
      case 4: Search1();break;
      case 5:exit(0);
    }
  }
  return 0;
}
void Search1(){
  int flag=0;
  bank_acc *ptr;
  ptr=Root;
  char w[10];
  printf("\n Enter type of account");
  scanf("%s",w);
  while(ptr!=NULL && flag==0){
    if(check(w,ptr->bank_type)>0)
       ptr=ptr->right;
    else if(check(w,ptr->bank_type)<0)
          ptr=ptr->left;
    else if(check(w,ptr->bank_type)==0){
       flag=1;
       printf("\n account holder name:%s",ptr->acc_name);
    }

    }
    if(flag==0)
      printf("\n Bank type not found");
}
