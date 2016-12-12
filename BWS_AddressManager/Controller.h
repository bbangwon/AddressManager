#pragma once
#include <iostream>
#include "Contact.h"
#include "Menu.h"
#include "Owner.h"

class Controller
{
private:
	Contact contacts;
	Menu menu;
	Owner owner;

	void inputOwnerInfo();	//������ ���� �Է�
	void printOwnerInfo();	//������ ���� ���
	void editOwnerInfo();	//������ ���� ����

	void addContact();	//����ó ���� �Է�
	void printContactList();	//����ó ��ü ��� ��ȸ
	void printContactDetail();	//����ó �� ��ȸ
	void editContact();	//����ó ����
	void copyContact();	//����ó ����
	void removeContact();	//����ó ����
	void runOwnerMenu();	//������ �޴� ����
	void runContactMenu();	//����ó �޴� ����
public:
	Controller();
	~Controller();

	void runMainMenu();	//���� �޴� ����
};

