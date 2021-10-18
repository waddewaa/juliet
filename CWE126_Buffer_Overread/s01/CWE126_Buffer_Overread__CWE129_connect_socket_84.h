/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE126_Buffer_Overread__CWE129_connect_socket_84.h
Label Definition File: CWE126_Buffer_Overread__CWE129.label.xml
Template File: sources-sinks-84.tmpl.h
*/
/*
 * @description
 * CWE: 126 Buffer Overread
 * BadSource: connect_socket Read data using a connect socket (client side)
 * GoodSource: Larger than zero but less than 10
 * Sinks:
 *    GoodSink: Ensure the array index is valid
 *    BadSink : Improperly check the array index by not checking the upper bound
 * Flow Variant: 84 Data flow: data passed to class constructor and destructor by declaring the class object on the heap and deleting it after use
 *
 * */

#include "std_testcase.h"

namespace CWE126_Buffer_Overread__CWE129_connect_socket_84
{

#ifndef OMITBAD

class CWE126_Buffer_Overread__CWE129_connect_socket_84_bad
{
public:
    CWE126_Buffer_Overread__CWE129_connect_socket_84_bad(int dataCopy);
    ~CWE126_Buffer_Overread__CWE129_connect_socket_84_bad();

private:
    int data;
};

#endif /* OMITBAD */

#ifndef OMITGOOD

class CWE126_Buffer_Overread__CWE129_connect_socket_84_goodG2B
{
public:
    CWE126_Buffer_Overread__CWE129_connect_socket_84_goodG2B(int dataCopy);
    ~CWE126_Buffer_Overread__CWE129_connect_socket_84_goodG2B();

private:
    int data;
};

class CWE126_Buffer_Overread__CWE129_connect_socket_84_goodB2G
{
public:
    CWE126_Buffer_Overread__CWE129_connect_socket_84_goodB2G(int dataCopy);
    ~CWE126_Buffer_Overread__CWE129_connect_socket_84_goodB2G();

private:
    int data;
};

#endif /* OMITGOOD */

}
