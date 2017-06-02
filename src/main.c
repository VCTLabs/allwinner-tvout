///////////////////////////////////////////////////////////////////////////
// Workfile: tvout.c (Implementation)
// Author: Daniel Giritzer
// Date: 2017-06-02
// Description: Simple Program to move the
// Remarks: -
// Revision: 1
// Copyright (C) 2017, Daniel Giritzer (giri@nwrk.biz)
///////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include "devmem2.h"
#include "tvout.h"

int main()
{
    unsigned long readfrommemory = 0;

    //Testing writemem
    writemem(0x01E00130, 0x10140025, 'w');

    //Testing readmem
    readmem(0x01E00130, 'w', &readfrommemory);

    //Print read value to stdout
    printf("Value: 0x%X \n", (unsigned int)readfrommemory);
    return 0;
}
