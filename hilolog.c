//find log(input)(x)
//assume x is between 1-10

#include <stdio.h>
#include <math.h>

//Jack Hershey
int main(void){

  int d,orin,newy,z,newn, i, negative;
  double x,n,otherx,p,l,y,t,xx,value,root,estvalue,v,nn,test;
 printf("Enter the numbers: ");
 scanf("%lf", &n);
 

 test=1;
 negative=0;
 
 printf("n: %lf\n", n);

  
   x = 10;
   root = .5; 
   estvalue = sqrt(10);
   value=(n-z);
  printf("actual value: %lf\n", value);

  for(i=0; i<1000000; i=i+1){
    
    if(value<estvalue){
      estvalue = sqrt(estvalue);
      root = (root / 2); 
    } else{
      estvalue = sqrt(estvalue*(estvalue*estvalue));
      root = (root + (2*root))/2;
   }
   
   if((value - estvalue) > 0 && (value - estvalue) < .0001){
     break;
   }
   if((value - estvalue) < 0 && (value - estvalue) > -.0001){
     break;
   }

   printf("estvalue: %lf\n", estvalue);
  }
  
  

  printf("final estvalue: %lf\n", estvalue);
  printf("final log base 10: %lf\n", root);
}
