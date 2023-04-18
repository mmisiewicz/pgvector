#ifndef FLOAT_CONFIG_H
#define FLOAT_CONFIG_H

// Comment/uncomment the following line to toggle usage of _Float16 instead of float
// this results in faster computations potentially, but not all hardware
// supports it natively. This is useful on Apple Silicon, though (less clear
// if it helps x86_64 though).
#define USE_FP16

#ifdef USE_FP16
typedef _Float16 PgVectorFloat;
#else
typedef float PgVectorFloat;
#endif

#endif // FLOAT_CONFIG_H
