#ifndef FLOAT_CONFIG_H
#define FLOAT_CONFIG_H

// Uncomment the following line to use __fp16 instead of float
#define USE_FP16

#ifdef USE_FP16
typedef _Float16 PgVectorFloat;
#else
typedef float float_type;
#endif

#endif // FLOAT_CONFIG_H