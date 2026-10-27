# include<conio.h>
int main()
{
 int user_id,password;
 int stored_id=101,stored_password=4321;
 printf (" enter user_id and password ");
 scanf("%d%d",&user_id,&password );
 if( user_id!=stored_id)
 {
   printf ("\n user not found ");
 }
  else if ( password==stored_password)
  { 
   printf ("\n login successful");
  }
 else
  {
   printf ("\n incorrect password ");
  }

 
}   
  
   
    
   
     
     
       
     
   
    
   
   
  
  
 
  
  






    