#include <stdio.h>
#include<stdlib.h>
#define N 100000000
//με την συνάρτηση collatz_next_term εξετάζουμε αν είναι άρτιος ή περιττός εκτελώντας την σωστή διαδικάσια αντίστοιχα για κάθε περίπτωση
unsigned long long collatz_next_term(unsigned long long n){
    if(n%2==1)
      return 3*n+1;
    else 
      return n/2;
}
//με την συνάρτηση collatz εκτελείται η ολοκληρωμένη διαδικασία καθώς ενσωματώσαμε και την προηγούμενη βοηθητική συνάρτηση
unsigned long long  collatz(unsigned long long n){
    if(n==1)
       return 1;
    else
       return collatz(collatz_next_term(n))+1;
}



//έπειτα ζήτησα από τον χρήστη 2 μεταβλητές, στην περίπτωση που δίνει περισσότερες ή λιγότερες του εμφανίζεται το αντίστοιχο μήνυμα
int main(int argc, char**argv){
    if(argc !=3){
        printf("check your varriants,error\n");
       return 1;
    }
    int min=atoi(argv[1]);
    int max=atoi(argv[2]);
//έτσι δημιούργησα μια διαδικασία if που εξεταζει αν οι μεταβλητές είναι σωστα ορισμένες για να εμφανίσει το αντοίστιχο μήνυμα "0" αν δεν είναι

    if(min<-N || max<-N || min<0 || max<0 || min>N || max>N)
      printf("0\n");
    else{
    int i=min;
    unsigned long long  megisto=0;
    do{
      unsigned long long count=collatz(i);
    if(count > megisto)
      megisto=count;
    i++;
// αλλιώς δημιούργησα μία επανάληψη για τις σωστά ορισμένες μεταβλητές κατά την οποία υπολογίζεται το πόσες φορές χρειάστηκε να εκτελεστεί
//η διαδικασία collatz για καθένα από τους αριθμούς ανάμεσα στα όρια που έθεσε ο χρήστεις μέσω των μεταβλητών και αποθήκευει μέσω τις μεταβλητής
//"megisto" των μέγιστο αριθμό των βημάτων αυτών
    }
    while(i<=max);
    printf("%llu\n",megisto);
    }
//τέλος εμφανίζει τον αριθμό των μέγιστων αυτών βημάτων

    
}



    

