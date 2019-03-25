/********************************************************************\
 Copyright (c) 2014 by Aleksey Cheusov

 See LICENSE file in the distribution.
\********************************************************************/

#ifndef _MKC_FGETLN_H_
#define _MKC_FGETLN_H_

#ifndef _MKC_CHECK_FGETLN
# error "Missing MKC_FEATURES += fgetln"
#endif

#include <stdio.h>

#ifndef HAVE_FUNC2_FGETLN_STDIO_H
char *fgetln (FILE *stream, size_t *len);
#endif

#endif // _MKC_FGETLN_H_
