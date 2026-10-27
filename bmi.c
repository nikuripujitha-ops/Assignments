# include<conio.h>
int main()
{
 float weight,height,bmi;
 printf ("enter weight (kg),height(m)");
 scanf("%f%f",& weight, &height);
 bmi=weight/(height *height );
 printf ("BMI=%.2f\n", bmi);
 if(bmi<18.5)
 {
 printf ("under weight ");
 }
 else if(bmi<25)
 {
 printf("normal");
 }
 else if (bmi<30)
 {
 printf ("over weight ");
 }
 else
 {
 printf ("obese");
 
 
  }

 
}   
  
   
    
   
     
     
       
     
   
    
   
   
  
  
 
  
  






    