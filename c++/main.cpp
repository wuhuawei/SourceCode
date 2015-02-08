//
//  main.cpp
//  cocosTest
//
//  Created by 华伟吴 on 14-9-5.
//  Copyright (c) 2014年 华伟吴. All rights reserved.
//
#include <string>
#include <stdio.h>
#include <stdlib.h>

#include "polity.h"
#include "PolityTest.h"

using namespace std;


int main(int argc, const char * argv[])
{
    mallocWidget widget;
    std::string* polity = widget.Create();
    *polity = "hello";
    
    return 0;
}

