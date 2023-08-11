/**
***************************************************************************
* @file     myString.c
* @version  1.0.0
* @brief    contains the implementation of functions in string.h library
* @author   Mohamed Abdallah
***************************************************************************
*/

/*********************** Includes Section Start *************************/
#include <stdio.h>
#include "myString.h"
/*********************** Includes Section End ***************************/




/*1.C library function - memchr()*/
void *my_memchr(const void *str, unsigned char value, unsigned int lenght)
{
    const unsigned char *tmpStr = str;

    if(NULL == str)
    {
        printf("NULL POINTER !!! \n");
    }

    else
    {
        while(lenght--)
        {
            if(*tmpStr == value)
            {
                return tmpStr;
            }
            else
            {
                tmpStr++;
            }
        }
    }

    return NULL;
}


/*2.C library function - memcmp()*/
int my_memcmp(const void *str1, const void *str2, unsigned int lenght)
{
    int ret = 0;  /*indicates str1 is equal to str2*/
    const unsigned char *Tmpstr1 = str1;
    const unsigned char *Tmpstr2 = str2;

    if((NULL == str1) || (NULL == str2))
    {
        printf("NULL POINTER !!! \n");
    }

    else
    {
        if(Tmpstr1 == Tmpstr2)
        {
            ret = 0;  /*indicates str1 is equal to str2.*/
        }

        else
        {
            while(lenght--)
            {

                if((*Tmpstr1) != (*Tmpstr2))
                {
                    ret = (*Tmpstr1 > *Tmpstr2) ? 1 : -1;
                    break;
                }
                else
                {
                    Tmpstr1++;
                    Tmpstr2++;
                }

            }
        }
    }

    return ret;
}


/*3.C library function - memcpy*/
void *my_memcpy(void *destAddress, const void * srcAddress, unsigned int lenght)
{
    unsigned char *TmpDestAddress = destAddress;
    const unsigned char *TmpSrcAddress = srcAddress;

    if((NULL == destAddress) || (NULL == srcAddress))
    {
        printf("NULL POINTER !!! \n");
    }

    else
    {
        while(lenght--)
        {
            *TmpDestAddress++ = *TmpSrcAddress++;
        }
    }

    return destAddress;
}


/*5.C library function - memset()*/
void *my_memset(void *StartAddress, unsigned char value, unsigned int lenght)
{
    unsigned char *TmpPtr = StartAddress;

    if(NULL == TmpPtr)
    {
        printf("NULL POINTER !!! \n");
    }

    else
    {
        while(lenght--)
        {
            *TmpPtr++ = value;
        }
    }

    return StartAddress;
}


/*6.C library function - strcat()*/
char *my_strcat(char *str1, const char *str2)
{
    char *tmpStr1 = str1;

    if((NULL == str1) || (NULL == str2))
    {
        printf("NULL POINTER !!! \n");
    }

    else
    {
        while(1)
        {
            if('\0' != (*tmpStr1))
            {
                tmpStr1++;
            }
            else
            {
                while('\0' != (*str2))
                {
                    *tmpStr1 = *str2;
                    tmpStr1++;
                    str2++;
                }
                break;
            }
        }
    }

    return str1;
}


/*7.C library function - strncat()*/
char *my_strncat(char *str1, const char *str2, unsigned int lenght)
{
    char *tmpStr1 = str1;

    if((NULL == str1) || (NULL == str2))
    {
        printf("NULL POINTER !!! \n");
    }

    else
    {
        while(1)
        {
            if('\0' != (*tmpStr1))
            {
                tmpStr1++;
            }
            else
            {
                while(lenght--)
                {
                    *tmpStr1++ = *str2++;
                }
                break;
            }
        }
    }

    return str1;
}


/*8.C library function - strchr()*/
char *my_strchr(const char *str, unsigned char value)
{
    if(NULL == str)
    {
        printf("NULL POINTER !!! \n");
    }

    else
    {
        while('\0' != (*str))
        {
            if(*str == value)
            {
                return str;
            }
            else
            {
                str++;
            }
        }
    }

    return NULL;
}


/*9.C library function - strcmp()*/
int my_strcmp(const char *str1, const char *str2)
{
    int ret = 0;  /*indicates str1 is equal to str2*/

    if((NULL == str1) || (NULL == str2))
    {
        printf("NULL POINTER !!! \n");
    }

    else
    {
        if(str1 == str2)
        {
            ret = 0;  /*indicates str1 is equal to str2.*/
        }

        else
        {
            while('\0' != (*str1))
            {

                if((*str1) != (*str2))
                {
                    ret = (*str1 > *str2) ? 1 : -1;
                    break;
                }
                else
                {
                    str1++;
                    str2++;
                }

            }
            if(('\0' == (*str1)) && ('\0' != (*str2))) ret = -1;
        }
    }

    return ret;
}


/*10.C library function - strncmp()*/
int my_strncmp(const char *str1, const char *str2, unsigned int lenght)
{
    int ret = 0;  /*indicates str1 is equal to str2*/

    if((NULL == str1) || (NULL == str2))
    {
        printf("NULL POINTER !!! \n");
    }

    else
    {
        if(str1 == str2)
        {
            ret = 0;  /*indicates str1 is equal to str2.*/
        }

        else
        {
            while('\0' != (*str1))
            {

                if((*str1) != (*str2))
                {
                    ret = (*str1 > *str2) ? 1 : -1;
                    break;
                }
                else
                {
                    str1++;
                    str2++;
                    if(!(--lenght))break;
                }

            }
            if(('\0' == (*str1)) && ('\0' != (*str2))) ret = -1;
        }
    }

    return ret;
}


/*12.C library function - strcpy()*/
char *my_strcpy(char *dest, const char *src)
{
    char *tmpDest = dest;
    const char *tmpSrc = src;

    if((NULL == dest) || (NULL == src))
    {
        printf("NULL POINTER !!! \n");
    }

    else
    {
        while('\0' != (*tmpSrc))
        {
            *tmpDest++ = *tmpSrc++;
        }
    }

    return dest;
}


/*13.C library function - strncpy()*/
char *my_strncpy(char *dest, const char *src, unsigned int lenght)
{
    char *tmpDest = dest;
    const char *tmpSrc = src;

    if((NULL == dest) || (NULL == src))
    {
        printf("NULL POINTER !!! \n");
    }

    else
    {
        while(lenght--)
        {

            if(('\0' != (*tmpSrc)))
            {
                *tmpDest++ = *tmpSrc++;
            }
            else
            {
                *tmpDest++ = '\0';
            }

        }
    }

    return dest;
}


/*14.C library function - strcspn()*/
unsigned int my_strcspn(const char *str1, const char *str2)
{
    unsigned int ret = 0;
    char *tmpStr1 = str1;
    const char *tmpStr2 = str2;

    if((NULL == str1) || (NULL == str2))
    {
        printf("NULL POINTER !!! \n");
    }

    else
    {
        while('\0' != (*tmpStr1))
        {
            while('\0' != (*tmpStr2))
            {
                if((*tmpStr1) == (*tmpStr2))break;
                else
                {
                    tmpStr2++;
                }
            }
            if('\0' != (*tmpStr2))break;
            else
            {
                ret++;
                tmpStr1++;
                tmpStr2 = str2;
            }

        }
    }

    return ret;
}


/*16.C library function - strlen()*/
unsigned int my_strlen(const char *str)
{
    unsigned int ret = 0;
    const char *tmpStr = str;

    if(NULL == str)
    {
        printf("NULL POINTER !!! \n");
    }

    else
    {
        while('\0' != (*tmpStr++))
        {
            ret++;
        }
    }

    return ret;
}


/*17.C library function - strpbrk()*/
char *my_strpbrk(const char *str1, const char *str2)
{
    char *tmpStr1 = str1;
    const char *tmpStr2 = str2;

    if((NULL == str1) || (NULL == str2))
    {
        printf("NULL POINTER !!! \n");
    }

    else
    {
        while('\0' != (*tmpStr1))
        {
            while('\0' != (*tmpStr2))
            {
                if((*tmpStr1) == (*tmpStr2))
                {
                    return tmpStr1;
                }
                else
                {
                    tmpStr2++;
                }
            }

            tmpStr1++;
            tmpStr2 = str2;

        }
    }

    return NULL;
}


/*18.C library function - strrchr()*/
char *my_strrchr(const char *str, unsigned int c)
{
    const char *tmpStr = str;
    char *ret = NULL;

    if(NULL == str)
    {
        printf("NULL POINTER !!! \n");
    }

    else
    {
        while('\0' != (*tmpStr))
        {
            if(*tmpStr == c)
            {
                ret = tmpStr++;
            }
            else
            {
                tmpStr++;
            }
        }
    }

    return ret;
}


/*19.C library function - strspn()*/
unsigned int my_strspn(const char *str1, const char *str2)
{
    unsigned int ret = 0;
    const char *tmpStr1 = str1;
    const char *tmpStr2 = str2;

    if((NULL == str1) || (NULL == str2))
    {
        printf("NULL POINTER !!! \n");
    }

    else
    {
        while(('\0' != (*tmpStr1)) && ('\0' != (*tmpStr2)))
        {
            if((*tmpStr1) != (*tmpStr2))
            {
                tmpStr2++;
            }
            else
            {
                ret++;
                tmpStr1++;
            }
        }
    }

    return ret;
}


/*20.C library function - strstr()*/
char *my_strstr(const char *str1, const char *str2)
{
    const char *tmpStr1 = str1;
    const char *tmpStr2 = str2;
    char *ret = NULL;

    if((NULL == str1) || (NULL == str2))
    {
        printf("NULL POINTER !!! \n");
    }

    else
    {
        while('\0' != (*tmpStr1))
        {
            if(((*tmpStr1) == (*tmpStr2)) || ('\0' == (*tmpStr2)))
            {
                ret = tmpStr1;
                while ('\0' != (*tmpStr2))
                {
                    if((*tmpStr1) != (*tmpStr2))
                    {
                        ret = NULL;
                        break;
                    }
                    else
                    {
                        tmpStr1++;
                        tmpStr2++;
                    }
                }
                break;
            }
            else
            {
                tmpStr1++;
            }
        }
    }

    return ret;
}

