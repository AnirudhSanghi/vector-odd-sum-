#include<stdio.h>
 int main()
{
   int a;
   int odd_num_sum =0;
   int i =1;
   printf("Please enter the vector size (n) :");
   scanf("%d",&a);
   printf("inputing vector of size %d \n",a);
   while(i<=a){     /*Here loop will run a times and ask user input for same */
               int l;
               printf("enter the no. %d :",i);
               scanf("%d",&l);
               if(l%2==0){ /*if remainder of l afterdividing l by 2 is 0 then it is even*/
                       printf("%d is an even no.\n",l);
               }
                   
              else{       /*else it is odd and its value is stored in a variable*/
                       printf("found odd no. %d \n",l);
                       odd_num_sum +=l;

              }
             i++;	
   }
  printf("sum of odd ones are %d \n",odd_num_sum);
return 0;
}
