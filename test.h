#ifndef __MY_LIBRARY
#define __MY_LIBRARY

int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}

#endif /* __MY_LIBRARY */
