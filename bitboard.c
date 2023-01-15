#include "bitboard.h"

const U64 west(U64 bit) {
  return (bit & ~aFile) << 1;
}
