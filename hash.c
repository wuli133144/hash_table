/**************************************************************************
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
**************************************************************************/

/*author:jackwu 2017-8-17*/


#include "hash.h"


// extern HASH_TABLE_API hash_node_t jw_hashtable[HASH_TABLE_NUM];

HASH_TABLE_API void inithashtable(){
          
          int i = 0;
          /*hash table first element is not useful*/
          for(i = 0;i < HASH_TABLE_NUM;i++){
              jw_hashtable[i].key=i;
              jw_hashtable[i].next=NULL;
          }
}

//  HASH_TABLE_API static  void inithashtable(hash_node_t hash[],int num){
//              int i = 0;
//              for(i = 0;i < num;i++){
//                  hash[i].key=i;
//                  hash[i].next=NULL; 
//              }
//  }

// HASH_TABLE_API void createhashtable(hash_node_t **hash,int num){
       
//        if((*hash)==NULL){
//            *hash=(hash_node_t *)malloc(sizeof(hash_node_t)*num);
//            if((*hash)==NULL){
//                perror("malloc failed\n");
//                exit(EXIT_FAILURE);
//            }
//        }
//        /*init hash table*/
//        inithashtable(*hash,num);
// }







HASH_TABLE_API void put(int key,int value){
    int hl=hashlib(key);
    printf("[%d]\n",hl);
    hash_node_t *node=(hash_node_t *)malloc(sizeof(hash_node_t));
    node->next=NULL;
    node->key=key;
    node->value=value;
    node->next=jw_hashtable[hl].next;
    jw_hashtable[hl].next=node;
}

HASH_TABLE_API int get(int key){

         int hl=hashlib(key);
         hash_node_t *h=jw_hashtable[hl].next;
         while(h!=NULL){
              if(h->key!=key){
                   h=h->next;
              }else{
                  break;
              }
         }
         /*no element */
         if(h==NULL){
             perror("can't find key\n");
             return (0);
         }
         return h->value;
    return 0;
}


HASH_TABLE_API int hashlib(int key){
    
     /*hash function */
    int hashvalue=(key&MAX_FLAG)%(HASH_TABLE_NUM);
    //hash_node_t *node=(hash_node_t *)malloc(sizeof(hash_node_t));
    //if(jw_hashtable[hashvalue].next)

    
    return hashvalue;
}



