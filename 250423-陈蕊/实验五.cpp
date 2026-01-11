1
#include<iostream>
using namespace std;
class Time
{
private:
    int hour;
    int minute;
    int sec;
public:

    void input()
    {
        cin >> hour >> minute >> sec;
    }
    void output()
    {
        cout << hour << ":" << minute << ":" << sec << endl;
    }
};

int main()
{
    Time t1;
    t1.input();
    t1.output();
    return 0;
}

2
#include<iostream>
#include"student.h"
using namespace std;
int main()
{
    Student stud;
    stud.set_value(7, "tcg", 'm');
    stud.display();
    Student stud1;
    stud1.set_value(1001, "zhangsan", 'f');
    stud1.display();
    return 0;
}

3
#include <iostream>
using namespace std;
class Cuboid 
{
private:
    double length;
    double width;
    double height;
public:
    void input()
    {
        cout << "请输入长方柱的长、宽、高：";
        cin >> length >> width >> height;
    }
    double Volume() 
    {
        return length * width * height;
    }
    void output(int index) 
    {
        cout << "第" << index << "个长方柱的体积为：" << Volume() << endl;
    }
};

int main() 
{
    Cuboid cuboids[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "请输入第" << i + 1 << "个长方柱的数据：" << endl;
        cuboids[i].input();
    }
    for (int i = 0; i < 3; i++)
    {
        cuboids[i].output(i + 1);
    }
    return 0;
}


4
#include <iostream>
using namespace std;
class Student
{
public:
    int num;      
    double score;
    void input() 
    {
        cout << "请输入学号和成绩（空格分隔）：";
        cin >> num >> score;
    }
};
void max(Student* stuarr, int n) 
{
    int maxindex = 0;
    for (int i = 1; i < n; i++) 
    {
        if (stuarr[i].score > stuarr[maxindex].score)
        {
            maxindex = i;
        }
    }
    cout << "最高成绩：" << stuarr[maxindex].score << endl;
    cout << "对应学号：" << stuarr[maxindex].num << endl;
}

int main() 
{
    const int N = 5; 
    Student students[N];
    cout << "请输入5个学生的信息：" << endl;
    for (int i = 0; i < N; i++) 
    {
        cout << "学生" << i + 1 << "：";
        students[i].input();
    }
    max(students, N);

    return 0;
}

5
#include <iostream>
using namespace std;
class Point 
{
private:
    int x;
    int y;

public:
    Point() : x(60), y(80) {}
    void setPoint(int i, int j) 
    {
        x = 60 + i;
        y = 80 + j;
    }
    void display() 
    {
        cout << "当前坐标点为：(" << x << ", " << y << ")" << endl;
    }
};

int main() 
{
    Point p;
    cout << "初始化后：" << endl;
    p.display();
    p.setPoint(10, 20);
    cout << "修改后：" << endl;
    p.display();
    return 0;
}