//
//  main.cpp
//  cocosTest
//
//  Created by 华伟吴 on 14-9-5.
//  Copyright (c) 2014年 华伟吴. All rights reserved.
//

#include <iostream>
#include <vector>

void printstudent(int student)
{
    std::cout<< student <<std::endl;
}

struct Log
{
public:
    void operator()(int student)
    {
        std::cout<< student <<std::endl;
    }
}logInfo;

int main(int argc, const char * argv[])
{
//    std::vector<int> vStudent;
//    vStudent.push_back(1);
//    vStudent.push_back(2);
//    vStudent.push_back(4);
//    vStudent.push_back(6);

//    std::for_each(vStudent.begin(), vStudent.end(), logInfo);
//    std::for_each(vStudent.begin(), vStudent.end(),
//                  [](int student)->void
//    {
//        std::cout<< student <<std::endl;
//    }
//                  );
    
    
    return 0;
}

