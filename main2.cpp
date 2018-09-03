/*
 *  Tarea programacion 1 en c/c++
 */
 #include <stdio.h>
 
int main(){
  int numIngresado;
  scnaf("%d",&numIngresado);
  printf("%d\n",numIngresado);
  if (numIngresado > 1 ){
    //Si numIngresado es primo
    bool esPrimo;
    int raizNum = (int)(sqrt(numIngresado));
    int divisor = 2;
    while(num%divisor != 0 && divisor <= raizNum){
      divisor++;
    }
    if(divisor < raizNum)
      esPrimo = false;
    else
      esPrimo = true;
    if(esPrimo){
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
            raizNum = (int)(sqrt(primo));
            divisor = 2;
            while(num%divisor != 0 && divisor <= raizNum){
              divisor++;
            }
            if(divisor < raizNum)
              esPrimo = false;
            else
              esPrimo = true;
          }while(!esPrimo(primo);
        }
      }
    }
  }
  return 0;
}