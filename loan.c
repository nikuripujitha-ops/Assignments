# include<conio.h>
int main()
{
 int age,credit;
 float income;
 printf ("enter age");
 scanf("%d",& age);
 printf ("enter income ");
 scanf("%d",&income);
 printf ("enter credit");
 scanf("%d",&credit);
 if(age<21||age>60)
 {
 printf ("loan rejected : age not in 21to 60");
 }
 else if (income<25000)
 {
 printf ("loan rejected : income below25000");
 }
 else if (credit<700)
 {
 printf ("loan rejected :credscore below 700");
 }
 else
 {
 printf ("loan approved");
 }
}   
  
   
    
   
     
     
       
     
   
    
   
   
  
  
 
  
  






    