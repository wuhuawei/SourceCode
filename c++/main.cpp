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

int main(int argc, char * argv[])
{
    ostream_iterator<int> outite(std::cout, " ");
    int ia[6] = {1, 3, 5, 7, 9, 11};
    std::vector<int> iv(ia, ia+6);

    adjacent_difference(iv.begin(), iv.end(), 0);
    auto_ptr<string> ms(new string("jjhou"));
    return 0;
}


