﻿#pragma once
#include<iostream>

class PersonalContact
{
private:
	char name[20];	//이름
	char phoneNumber[13];	//전화번호
	char email[30];	//이메일
	char address[50];	//주소
public:
	//기본생성자
	PersonalContact();
	~PersonalContact();

	//복사생성자
	PersonalContact(PersonalContact &personal);
	
	//연락처 입력
	void inputContact(char *inName,
		char *inPhoneNumber = nullptr,
		char *inEmail = nullptr,
		char *inAddress = nullptr);
	
	//연락처 조회
	void getContact(char *outName,
		char *outPhoneNumber,
		char *outEmail,
		char *outAddress);

	//연락처 수정
	void editContact(char *inName,
		char *inPhoneNumber = nullptr,
		char *inEmail = nullptr,
		char *inAddress = nullptr);

};

