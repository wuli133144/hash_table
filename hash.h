
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

#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <limits.h>  /*int max*/


#define HASH_TABLE_API
#define HASH_TABLE_NUM       10000
#define MAX_FLAG             INT_MAX


typedef struct hash_table_node{
    int key;
    int value;
    struct hash_table_node *next;
}hash_node_s;


typedef  hash_node_s  hash_node_t;




/*static alloc hash_table version 0.1 i free */
/*global var number*/
HASH_TABLE_API hash_node_t jw_hashtable[HASH_TABLE_NUM];

/*dynamic alloc hash_table*/
//HASH_TABLE_API void createhashtable(hash_node_t **hash,int num);
//HASH_TABLE_API static void inithashtable(hash_node_t hash[],int num);
HASH_TABLE_API void inithashtable();
HASH_TABLE_API void put(int key,int value);
HASH_TABLE_API int get(int key);
HASH_TABLE_API int hashlib(int key);


#endif 