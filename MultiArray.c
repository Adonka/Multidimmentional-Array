/*"CS288 H3 Session-2 class9”
Struct Student
Adolfo Nakamura
07/23/2019


*/
#include<stdio.h>
#include<string.h>
int main(){
      int array[2][3];
      int i, j;
   for (i=0;i<2;i++)
         for (j=0;j<3;j++)
             {if (i == 0 & j == 0)  
             array[i][j]= (int)'M';
             else if (i == 0 & j == 1)
             array[i][j]= (int)'A';
             else if (i == 0 & j == 2)
             array[i][j]= (int)'N';    
              if (i == 1 & j == 0)  
             array[i][j]= 43668;
             else if (i == 1 & j == 1)
             array[i][j]= 82;
             else if (i == 1 & j == 2)
             array[i][j]= 62; } 
     for (i=0;i<2;i++)
      {   for (j=0;j<3;j++)
         {if (i==1 & j ==0)
            printf("\n%d \t",array[i][j]);
            
          
            else
            printf("%d \t",array[i][j]);
          }
      }
  }