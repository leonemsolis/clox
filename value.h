//
// Created by znnxzz on 22-Jun-22.
//

#ifndef CLOX_VALUE_H
#define CLOX_VALUE_H

typedef double Value;

typedef struct {
    int count;
    int capacity;
    Value* values;
} ValueArray;

void initValueArray(ValueArray* valueArray);
void writeValueArray(ValueArray* array, Value value);
void freeValueArray(ValueArray* valueArray);
void printValue(Value value);

#endif //CLOX_VALUE_H
