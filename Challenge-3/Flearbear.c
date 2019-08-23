#include <stdio.h>

void feed(int *mass , int *happy , int *clean , int *poo ){
    *mass += 10 ;
    *happy += 2;
    
    *clean -= 1;
    
    *poo +=1;
}
void play(int *mass , int *happy , int *clean){
    *happy +=4;
    *mass -=2;
  
    *clean -= 1;
    
}
void cleaning(int *mass , int *happy , int *clean ){
    *clean +=6 ;
    //*mass += 0;
    *happy -=1;

}


int main() {

    int mass = 0 , happy = 0 , clean = 0 , poo = 0 ,food_counter = 0 , paly_counter = 0 ,clean_counter = 0 ;

    for (int i = 0; i < 8; i++)
    { 
       if(mass < 80)
       { feed(&mass , &happy , &clean , &poo);
        food_counter ++ ;
        }
    }

    for(int i = 0 ; i < 5 ; i++)
    {   if(happy < 30){
            play(&mass , &happy , &clean );
            paly_counter ++ ;
       }
    }
       
    for(int i = 0 ; i < 3 ; i++){
            cleaning(&mass , &happy , &clean );
            clean_counter ++ ;
            poo -= 3 ;
        printf("+++++++++++++++++++++++++++++++++++++++++++\n");
        printf("mass = %d _  happy = %d _  clean = %d _\n" ,mass , happy , clean );
        printf("food = %d _ play = %d _ clean_counter= %d _\n" ,food_counter , paly_counter , clean_counter );
        printf("+++++++++++++++++++++++++++++++++++++++++++\n");
    }
    

}