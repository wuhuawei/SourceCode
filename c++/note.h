//wuhuawei@2014.12.12 create this file helping improving memory


/* nullptr_t */
// nullptr_t在c++11中替代null,避免null在重载机制中函数参数到问题。
const
class nullptr_t_t
{
public:
} nullptr_t {};
/* nullptr_t */

/* random算法 */
// 随机数设备
//#include <random>
//std::random_device rd;
//std::mt19937 gen(rd());
/* random算法 */

/* std::stack */
//    std::stack<int, std::vector<int>> vNumber;
//    for (int i =0; i< 10; i++)
//    {
//        vNumber.push(i);
//    }
//    vNumber.pop();
//    std::cout<< vNumber.size() <<std::endl;
//    std::cout<< vNumber.top() <<std::endl;
/* std::stack */

/* typdeid的用法 */
//    std::cout<<typeid(int).name()<<std::endl;
//    std::cout<<typeid(CString).name()<<std::endl;
//    std::cout<<typeid(CString &).name()<<std::endl;
//    std::cout<<typeid(CString *).name()<<std::endl;
/* typdeid */


//    mallocWidget widget;
//    std::string* polity = widget.Create();
//    *polity = "hello";


//void display()
//{
//    glClear(GL_COLOR_BUFFER_BIT);
//    glBegin(GL_POLYGON);
//    glVertex2f(-0.5, -0.5);
//    glVertex2f(-0.5, 0);
//    glVertex2f(0.5, 0.5);
//    glVertex2f(0.5, -0.5);
//    glEnd();
//    glFlush();
//}
//    glutInit(&argc, argv);
//    glutCreateWindow("Xcode Glut Demo");
//    glutDisplayFunc(display);\
//    glutMainLoop();


//#include <stdio.h>
//#include <iterator> //for iterator adapters
//#include <deque>
//#include <algorithm> //for copy()
//#include <iostream>
//#include <vector>
//#include <fstream>
//istream_iterator<int> eoff;
//ifstream infile("/Users/huaweiwu/a.txt"); //运行前，请让f:\\test.txt里面只有一个整数
//istream_iterator<int> input(infile);
//cout<<"the first element:"<<*input<<endl;
//++input;
//cout<<(input == eoff ? "EOF" : "others")<<endl;
//
//cout<<"*******************"<<endl;
//cout<<"请输入整数,按ctrl+z结束输入:"<<endl;
//vector<int> ivec;
//copy(istream_iterator<int>(cin),istream_iterator<int>(),back_inserter(ivec));
////下句为将ivec内容输出屏幕
//copy(ivec.begin(),ivec.end(),ostream_iterator<int>(cout,"\t"));

/* std::ignore() */
//    int a,b,c;
//    cout<<"input a:";
//    cin>>a;
//    cin.ignore(1024, '\n');
//    cout<<"input b:";
//    cin>>b;
//    cin.ignore(1024, '\n');
//    cout<<"input c:";
//    cin>>c;
//    cout<<a<<"\t"<<b<<"\t"<<c<<endl;
/* std::ignore() */

//mallocWidget widget;
//std::string* polity = widget.Create();
//*polity = "hello";

