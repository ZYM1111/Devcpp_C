/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sun Aug 25 10:50:24 2019
 */
/* Compiler settings for D:\visual c++6.0\Microsoft Visual Studio\MyProjects\实参求职的顺序\实参求职的顺序.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID LIBID_MYLib = {0xD4A554F7,0xD1E8,0x4F4F,{0x9E,0x08,0x18,0xAF,0x7E,0x72,0xDC,0x91}};


#ifdef __cplusplus
}
#endif

