#ifndef __CRC32_H__
#define __CRC32_H__

# include <stdio.h>

unsigned long crc32(unsigned long crc, const unsigned char* buf, size_t len);

#endif
