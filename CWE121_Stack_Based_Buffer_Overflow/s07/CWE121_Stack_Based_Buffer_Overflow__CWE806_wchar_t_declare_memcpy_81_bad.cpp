/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_memcpy_81_bad.cpp
Label Definition File: CWE121_Stack_Based_Buffer_Overflow__CWE806.label.xml
Template File: sources-sink-81_bad.tmpl.cpp
*/
/*
 * @description
 * CWE: 121 Stack Based Buffer Overflow
 * BadSource:  Initialize data as a large string
 * GoodSource: Initialize data as a small string
 * Sinks: memcpy
 *    BadSink : Copy data to string using memcpy
 * Flow Variant: 81 Data flow: data passed in a parameter to an virtual method called via a reference
 *
 * */
#ifndef OMITBAD

#include "std_testcase.h"
#include "CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_memcpy_81.h"

namespace CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_memcpy_81
{

void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_memcpy_81_bad::action(wchar_t * data) const
{
    {
        wchar_t dest[50] = L"";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        memcpy(dest, data, wcslen(data)*sizeof(wchar_t));
        dest[50-1] = L'\0'; /* Ensure the destination buffer is null terminated */
        printWLine(data);
    }
}

}
#endif /* OMITBAD */
