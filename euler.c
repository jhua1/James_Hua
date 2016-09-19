void main(){
  //Problem One
  int x = 999;
  int sum = 0;
  while(x){
    if( !(x % 5) || !(x % 3)){
      sum+=x;
    }
    x--;
  }
  printf("Multitples 3 and 5: %d \n" , sum);  
  //Problem Six
  int sqr1 = 0;
  int sqr2 = 0;
  int num = 100;
  while(num){
    sqr1+= num*num;
    sqr2+= num;
    num--;
  }
  sqr2*=sqr2;
  int dif = sqr2 - sqr1;
  printf("Sum square difference: %d \n" , dif);
}
    
