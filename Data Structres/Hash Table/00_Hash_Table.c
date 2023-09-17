#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdint.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct{
    char name[MAX_NAME];
    int age;
}person;

person * hash_table[TABLE_SIZE];

unsigned int hash(char *name){

    /*Hash Function*/

    int length = strnlen(name , MAX_NAME);
    unsigned int hash_value = 0 ;
    for(int i = 0 ; i < length ; i ++){
        hash_value = ((hash_value + name[i] ) * name[i]) % TABLE_SIZE;
    }
    return hash_value;
}


bool init_hash_table(){

    /* Initialize all values to NULL */ 

    for(int i=0 ;i < TABLE_SIZE ; i++){
        hash_table[i] = NULL ;
    }
    // table is empty 
}

void print_table(){
    printf("\nStart\n");
    for(int i = 0 ; i < TABLE_SIZE ;i++){
        if (hash_table[i] == NULL){
            printf("\t%i\t--\n",i);
        }
        else{
            printf("\t%i\t--%s\n",i,hash_table[i]->name);
        }
    }
    printf("End\n");
}

bool hash_table_insert(person *p){

    /* Insertiom into Hash Table */

    if (p==NULL) return false;
    int index = hash(p->name) ;
    if (hash_table[index] != NULL){
        return false;
    }
    hash_table[index] = p ;
    return true ;
}


person *hash_table_lookup(char *name){

    /* Search function for Hash Table*/

    int index = hash(name);
    if (hash_table[index] != NULL && 
            strcmp(hash_table[index]->name,name)==0){
        return hash_table[index];     
        }
    return NULL;
}

person *hash_table_delete(char *name){

    /* Delete Function to delete elements in the Hash Table*/

    int index = hash(name);
    if(hash_table[index] != NULL && 
        strcmp(hash_table[index]->name , name)==0){
            person *tmp = hash_table[index];
            hash_table[index] = NULL ;
            return tmp;
        }
    printf("\nSuch Data doesnt Exist\n");
    return NULL;
}

int main(){
    init_hash_table();
    print_table();
    person hrithik = {.name = "Hrithik" , .age = 20};
    person gopal = {.name = "Gopal" , .age = 18};
    person saiTeja = {.name = "Sai Teja" , .age = 19};
    person Sandeep = {.name = "Sandeep" , .age = 19 };

    hash_table_insert(&hrithik);
    hash_table_insert(&gopal);
    hash_table_insert(&saiTeja);
    hash_table_insert(&Sandeep);
    print_table();


    person * temp = hash_table_lookup("Hrithik");

    if (temp == NULL ){
        printf("\nPeron not avaialable in Table\n");
    }
    else{
        printf("\nPerson is %s and age is %d\n",temp->name , temp->age);
    }

    hash_table_delete("Sai Teja");
    print_table();
    // printf("\tJacob -- %u\n",hash("Jacob"));
    // printf("\tHrithik -- %u\n",hash("Hrithik"));
    // printf("\tGopal -- %u\n",hash("Gopal"));
    return 0 ; 
}