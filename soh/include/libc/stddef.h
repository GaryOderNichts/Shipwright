#ifndef STDDEF_H
#define STDDEF_H

#ifndef NULL
#ifndef __cplusplus
#define NULL ((void*)0)
#else
#define NULL nullptr
#endif
#endif

#if 0
#define size_t unsigned long
#define ssize_t long

#endif

//typedef unsigned long size_t;
//typedef long ssize_t;

#endif
