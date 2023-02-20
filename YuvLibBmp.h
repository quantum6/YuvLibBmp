#ifndef __YUV_LIB_BMP_H__
#define __YUV_LIB_BMP_H__

int RgbToBmpFile(const char *pFileName,
                 const char* pRgbData,
                 const int   nWidth,
                 const int   nHeight);

int RgbaToBmpFile(const char *pFileName,
                  const char* pRgbData,
                  const int   nWidth,
                  const int   nHeight);


#endif

