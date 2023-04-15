#ifndef clox_debug_h
#define clox_debug_h

#include "chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);

// Returns the offset of the beggining of the next instruction
int disassembleInstruction(Chunk* chunk, int offset);

#endif