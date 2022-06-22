//
// Created by znnxzz on 22-Jun-22.
//

#ifndef CLOX_DEBUG_H
#define CLOX_DEBUG_H

#include "chunk.h"

void dissasembleChunk(Chunk* chunk, const char* name);
int dissasembleInstruction(Chunk* chunk, int offset);

#endif //CLOX_DEBUG_H
