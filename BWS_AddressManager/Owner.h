#pragma once
#include <iostream>

class Owner
{
private:
	char name[20];	//�̸�
	char phoneNumber[13];	//��ȭ��ȣ
	char email[30];	//�̸���
	char address[50];	//�ּ�
	char twitterAccount[20];	//Ʈ���� ����

public:
	Owner();
	~Owner();

	//������ ���� �Է�
	void inputOwnerInfo(char *inName, 
		char *inPhoneNumber = nullptr,
		char *inEmail = nullptr, 
		char *inAddress = nullptr,
		char *inTwitterAccount = nullptr);

	//������ ���� ���
	void printOwnerInfo();

	//������ ���� ����
	void editOwnerInfo(char *inName,
		char *inPhoneNumber = nullptr,
		char *inEmail = nullptr,
		char *inAddress = nullptr,
		char *inTwitterAccount = nullptr);
};

