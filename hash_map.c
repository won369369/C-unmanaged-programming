#include <stdio.h>
#include <stdlib.h>

// Define the maximum size of the table
#define HASH_TABLE_SIZE 10

// Define the structure for each node in the bucket
typedef struct node {
    int key;
    int value;
    struct node *next;
} node;

// Define the structure for the hash table
typedef struct hashTable {
    node *buckets[HASH_TABLE_SIZE];
} hashTable;

// Function to create a new hash table
hashTable* createHashTable() {
    hashTable* ht = malloc(sizeof(hashTable));
    for (int i = 0; i < HASH_TABLE_SIZE; i++) {
        ht->buckets[i] = NULL;
    }
    return ht;
}

// Hash function
int hash(int key) {
    return key % HASH_TABLE_SIZE;
}

// Function to insert a key-value pair into the hash table
void insert(hashTable *ht, int key, int value) {
    node *newNode = malloc(sizeof(node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;

    int index = hash(key);
    node *current = ht->buckets[index];
    
    if (current == NULL) {
        ht->buckets[index] = newNode;
    } else {
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to get a value associated with a key
int get(hashTable *ht, int key) {
    int index = hash(key);
    node *bucket = ht->buckets[index];

    while (bucket != NULL) {
        if (bucket->key == key) {
            return bucket->value;
        }
        bucket = bucket->next;
    }

    return -1;  // If key does not exist in hash table
}
