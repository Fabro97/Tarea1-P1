/*
 *  Tarea programacion 1 en c/c++
 */
 #include <stdio.h>
 
 bool esPrimo(int num){
   int divisor = 2;
   int raizNum = (int)(sqrt(num));
   while(num%divisor != 0 && divisor <= raizNum){
     divisor++;
   }
   if(divisor < raizNum)
     return false;
   else
     return true;
 }
 
int main(){
  int numIngresado;
  scnaf("%d",&numIngresado);
  printf("%d\n",numIngresado);
  if (numIngresado > 1 ){
    //Si numIngresado es primo
    if(esPrimo(numIngresado)){
      printf(numIngresado);
    }else{
      int primo = 2;
      while (numIngresado > 1){
        int multiplicidad = 0;
        while ((numIngresado % primo)  == 0){
          numIngresado /= primo;
          multiplicidad++;
        }
        printf("%d^%d\n",primo,multiplicidad);
        if(x > 1){
          do{
            primo++;
          }while(!esPrimo(primo);
        }
      }
    }
  }
  return 0;
}