
// ****************************************************************************
// File: Utility.h
// Desc: Utility functions
//
// ****************************************************************************
#pragma once

// Size of string with out terminator
#define SIZESTR(x) (sizeof(x) - 1)

// Data and function alignment
#define ALIGN(_x_) __declspec(align(_x_))

// Time 
typedef double TIMESTAMP;  // Time in floating seconds
#define SECOND 1
#define MINUTE (60 * SECOND)
#define HOUR   (60 * MINUTE)
#define DAY    (HOUR * 24)

TIMESTAMP GetTimeStamp();
void Log(FILE *pLogFile, const char *format, ...);
uint32_t DJBHash(const uint8_t *pData, int iSize);
uint16_t GetCRC16(uint8_t* pData, int iLen);

bool FileExists( char* filePath );