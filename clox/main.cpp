
#include "common.h"
#include "memory.h"
#include "chunk.h"
#include "debug.h"
#include "debug.c"
#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {
  Chunk chunk;
  initChunk(&chunk);
  writeChunk(&chunk, OP_RETURN);

  disassembleChunk(&chunk, "test chunk");
  freeChunk(&chunk);

  return 0;
}