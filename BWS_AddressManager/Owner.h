#pragma once
#include <iostream>

class Owner
{
private:
	char name[20];	//이름
	char phoneNumber[13];	//전화번호
	char email[30];	//이메일
	char address[50];	//주소
	char twitterAccount[20];	//트위터 계정

public:
	Owner();
	~Owner();

	//소유자 정보 입력
	void inputOwnerInfo(char *inName, 
		char *inPhoneNumber = nullptr,
		char *inEmail = nullptr, 
		char *inAddress = nullptr,
		char *inTwitterAccount = nullptr);

	//소유자 정보 출력
	void printOwnerInfo();

	//소유자 정보 수정
	void editOwnerInfo(char *inName,
		char *inPhoneNumber = nullptr,
		char *inEmail = nullptr,
		char *inAddress = nullptr,
		char *inTwitterAccount = nullptr);
};

