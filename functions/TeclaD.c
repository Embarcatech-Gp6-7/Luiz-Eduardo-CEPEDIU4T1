#include "functions.h"

void teclaD() {
  uint32_t imgD[5][5] = {
    { 0x008000,   0x008000,   0x008000,   0x008000,   0x008000 },
    { 0x008000,   0x008000,   0x008000,   0x008000,   0x008000 },
    { 0x008000,   0x008000,   0x008000,   0x008000,   0x008000 },
    { 0x008000,   0x008000,   0x008000,   0x008000,   0x008000 },
    { 0x008000,   0x008000,   0x008000,   0x008000,   0x008000 }
  };

  renderRGBMatrix(imgD);
}