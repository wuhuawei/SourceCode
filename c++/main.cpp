//
//  main.cpp
//  cocosTest
//
//  Created by 华伟吴 on 14-9-5.
//  Copyright (c) 2014年 华伟吴. All rights reserved.
//

#include <GLUT/GLUT.h>
#include <algorithm>
#include <functional>
#include <vector>
#include <iostream>
#include <iterator>
#include <numeric>
#include <memory>
using namespace std;

int main(int argc, const char * argv[])
{
    int temp[] = {5,6,7,8};
    std::vector<int> var(temp, temp+4);
    std::vector<int> desc;
//    copy(var.begin(), var.end(), desc.begin());
    
    return 0;
}


