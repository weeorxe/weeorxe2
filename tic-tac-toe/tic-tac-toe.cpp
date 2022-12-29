#include <iostream>
#include "Application.h"

int main()
{
    // �������
    std::setlocale(LC_ALL, "Russian");

    // ������� ��������� ������ Application
    Application app = Application();

    // ���� ���� �� ������������
    while (!app.isStopped())
    {
        // ��������� ����
        app.Update();
    }
}
