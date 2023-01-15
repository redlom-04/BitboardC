#include "bitboard.h"

const U64 nort(U64 bit) { return bit >> 8; }
const U64 sout(U64 bit) { return bit << 8; }
const U64 west(U64 bit) { return (bit & FILE_A) << 1; }
const U64 east(U64 bit) { return (bit & FILE_H) >> 1; }

const U64 nort_west(U64 bit) { return (bit & FILE_A) >> 7; }
const U64 sout_west(U64 bit) { return (bit & FILE_A) << 9; }
const U64 nort_east(U64 bit) { return (bit & FILE_H) >> 9; }
const U64 sout_east(U64 bit) { return (bit & FILE_H) << 7; }
