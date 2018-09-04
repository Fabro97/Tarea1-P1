/*
 *  Tarea programacion 1 en c/c++
 */
 #include <stdio.h>
 #include <math.h>
 
int main(){
  int numIngresado;
  scanf("%d",&numIngresado);
  if (numIngresado > 1 ){
    //Si numIngresado es primo
    bool esPrimo;
    int raizNum = (int)(sqrt(numIngresado));
    int divisor = 2;
    while(numIngresado%divisor != 0 && divisor <= raizNum){
      divisor++;
    }
    if(divisor < raizNum)
      esPrimo = false;
    else
      esPrimo = true;
    if(esPrimo){
      printf("%d",numIngresado);
    }else{
      int primo = 2;
      while (numIngresado > 1){
        int multiplicidad = 0;
        while ((numIngresado % primo)  == 0){
          numIngresado /= primo;
          multiplicidad++;
        }
        printf("%d^%d\n",primo,multiplicidad);
        if(numIngresado > 1){
          do{
            primo++;
            raizNum = (int)(sqrt(primo));
            divisor = 2;
            while(numIngresado%divisor != 0 && divisor <= raizNum){
              divisor++;
            }
            if(divisor < raizNum)
              esPrimo = false;
            else
              esPrimo = true;
          }while(!esPrimo);
        }
      }
    }
  }
  return 0;
}
