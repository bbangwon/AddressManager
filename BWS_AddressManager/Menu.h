#pragma once
#include <iostream>

class Menu
{
private:
	char topMenu[3][32];	//�ֻ��� �޴� ����
	char ownerMenu[4][32];	//������ �޴� ����
	char contactMenu[7][32];	//����ó �޴� ����
	int menuType;	//0:�ֻ��� �޴�, 1:������ �޴�, 2:����ó �޴�
public:
	//������
	Menu();
	~Menu();

	void showMenu();	//���� �޴� ���� ���¸� ���� �޴� ��� ���
	void setMenuSelection(int selection);
	int execution();	//������ �޴� ����
};

