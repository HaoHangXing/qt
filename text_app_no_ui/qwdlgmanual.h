#ifndef QWDLGMANUAL_H
#define QWDLGMANUAL_H

#include <QDialog>
#include <QCheckBox>
#include <QRadioButton>
#include <QPushButton>
#include <QPlainTextEdit>

class qwdlgmanual : public QDialog
{

    Q_OBJECT

private:
    //因窗口涉及到关闭与打开，需要使用动态创建的方式
    //以指针的形式创建
    QCheckBox   *chkBoxUnder;
    QCheckBox   *chkBoxItalic;
    QCheckBox   *chkBoxBold;

    QRadioButton    *rBtnBlack;
    QRadioButton    *rBtnRed;
    QRadioButton    *rBtnBlue;

    QPushButton     *btnOK;
    QPushButton     *btnCancel;
    QPushButton     *btnClose;

    QPlainTextEdit  *txtEdit;

    void iniUI();//UI 创建组件、布局、设置属性
    void iniSignalSlots();//初始化信号与槽的链接

private slots: //定义槽
    //每个checkBox都需要一个槽函数
    void on_chkBoxUnder(bool checked);
    void on_chkBoxItalic(bool checked);
    void on_chkBoxBold(bool checked);

    //一组radioBox只需要一个槽函数
    void setTextFontColor(); //设置字体颜色
public:
    qwdlgmanual(QWidget *parent = 0);
    ~qwdlgmanual();
};

#endif // QWDLGMANUAL_H
