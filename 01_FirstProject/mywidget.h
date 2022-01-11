#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

//命名规范

//类名 首字母大写 单词与单词之间首字母大写
//函数名 变量名称 首字母小写 单词与单词之间首字母大写

//快捷键
//ctrl+/  注释
//ctrl+r 允许
//ctrl+b 编译
//ctrl+鼠标滚轮  字体缩放
//ctrl+f 查找
//ctrl+shif+上或者下 整行移动
//f1 帮助文档 两次f1 帮助文档全屏 第二种方式左侧文档     第三种‪F:\Qt\6.2.0\mingw81_64\bin\assistant.exe
//ctrl+i  自动对齐
//f4 同名之间.h 和.cpp 切换



class myWidget : public QWidget
{
    Q_OBJECT//宏

public:
    myWidget(QWidget *parent = nullptr);//构造函数
    ~myWidget();//析构
};
#endif // MYWIDGET_H
