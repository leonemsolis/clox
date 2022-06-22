//
// Created by znnxzz on 22-Jun-22.
//

#ifndef CLOX_MEMORY_H
#define CLOX_MEMORY_H

#include "common.h"
#define GROW_CAPACITY(capacity) \
    ((capacity) < 8 ? 8 : (capacity) * 2)

#define GROW_ARRAY(type, pointer, oldCapacity, newCapacity) \
    (type*) reallocate(pointer, sizeof(type) * (oldCapacity), sizeof(type) * (newCapacity))

#define FREE_ARRAY(type, pointer, capacity) \
    reallocate(pointer, sizeof(type) * capacity, 0)

void* reallocate(void* pointer, size_t oldCapacity, size_t newCapacity);
#endif //CLOX_MEMORY_H
