//
// Created by znnxzz on 22-Jun-22.
//

#include <stdlib.h>
#include <stdio.h>

#include "memory.h"
#include "value.h"

void initValueArray(ValueArray* valueArray) {
    valueArray->count = 0;
    valueArray->capacity = 0;
    valueArray->values = NULL;
}

void freeValueArray(ValueArray* valueArray) {
    FREE_ARRAY(Value, valueArray->values, valueArray->capacity);
    initValueArray(valueArray);
}

void writeValueArray(ValueArray* array, Value value) {
    if(array->capacity == array->count) {
        int oldCapacity = array->capacity;
        array->capacity = GROW_CAPACITY(array->capacity);
        array->values = GROW_ARRAY(Value, array->values, oldCapacity, array->capacity);
    }

    array->values[array->count] = value;
    array->count++;
}

void printValue(Value value) {
    printf("%g", value);
}