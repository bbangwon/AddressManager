#pragma once
#include <iostream>
#include "PersonalContact.h"

class Contact
{
private:
	PersonalContact contactInfo[100];	//100���� ����ó ���� ������ �迭
	int numberOfContact;	//���� ����� ����ó ����
public:
	//������ - ��� �ʱ�ȭ�� ���� ����
	Contact();
	~Contact();

	//����ó ���� �Է�
	void inputContact(char *name,
		char *phoneNumber = nullptr,
		char *email = nullptr,
		char *address = nullptr);

	//����ó ��ü ��� ��ȸ
	void printContactList();

	//����ó �� ��ȸ - �Լ� �����ε�
	void printContact(int index);
	void printContact(char *inName);

	//����ó ����
	void editContactByIndex(int index,
		char *name,
		char *phoneNumber = nullptr,
		char *email = nullptr,
		char *address = nullptr);

	//����ó ����
	void copyContact(int index);
	
	//����ó ����
	void removeContactByIndex(int index);
};

