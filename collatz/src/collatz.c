#include <stdio.h>
#include<stdlib.h>

unsigned long long collatz_next_term(unsigned long long n){
    if(n%2==1)
      return 3*n+1;
    else 
      return n/2;
}

unsigned long long  collatz(unsigned long long n){
    if(n==1)
       return 1;
    else
       return collatz(collatz_next_term(n))+1;
}




int main(int argc, char**argv){
    if(argc !=3){
        printf("check your varriants\nerror\n");
       return 1;
    }
    int min=atoi(argv[1]);
    int max=atoi(argv[2]);

    if(min<-100000000 || max<-100000000 ||min<0 || max<0 || min>100000000 || max>100000000)
      printf("0\n");
    else{
    int i=min;
    unsigned long long  megisto=0;
    do{
      unsigned long long count=collatz(i);
    if(count > megisto)
      megisto=count;
    i++;

    }
    while(i<=max);
    printf("%llu\n",megisto);
    }


    
}
