#include "stdafx.h"
#include "Owner.h"

using namespace std;

Owner::Owner()
{
}


Owner::~Owner()
{
}

//������ ���� �Է�
void Owner::inputOwnerInfo(char * inName, char * inPhoneNumber, char * inEmail, char * inAddress, char * inTwitterAccount)
{
	if (inName != nullptr)
		strcpy_s(name, 20, inName);

	if (inPhoneNumber != nullptr)
		strcpy_s(phoneNumber, 13, inPhoneNumber);

	if (inEmail != nullptr)
		strcpy_s(email, 30, inEmail);

	if (inAddress != nullptr)
		strcpy_s(address, 50, inAddress);

	if (inTwitterAccount != nullptr)
		strcpy_s(twitterAccount, 20, inTwitterAccount);
}

//������ ���� ���
void Owner::printOwnerInfo()
{
	cout << "������ �̸�: " << name << endl;
	cout << "������ ��ȭ��ȣ: " << phoneNumber << endl;
	cout << "������ �̸���: " << email << endl;
	cout << "������ �ּ�: " << address << endl;
	cout << "������ Ʈ���� ����: " << twitterAccount << endl;
}

//������ ���� ����
void Owner::editOwnerInfo(char * inName, char * inPhoneNumber, char * inEmail, char * inAddress, char * inTwitterAccount)
{
	if (inName != nullptr)
		strcpy_s(name, 20, inName);

	if (inPhoneNumber != nullptr)
		strcpy_s(phoneNumber, 13, inPhoneNumber);

	if (inEmail != nullptr)
		strcpy_s(email, 30, inEmail);

	if (inAddress != nullptr)
		strcpy_s(address, 50, inAddress);

	if (inTwitterAccount != nullptr)
		strcpy_s(twitterAccount, 20, inTwitterAccount);
}

