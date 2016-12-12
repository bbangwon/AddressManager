﻿#pragma once
#include <iostream>
#include "PersonalContact.h"

class Contact
{
private:
	PersonalContact contactInfo[100];	//100명의 연락처 저장 가능한 배열
	int numberOfContact;	//현재 저장된 연락처 개수
public:
	//생성자 - 멤버 초기화를 위해 생성
	Contact();
	~Contact();

	//연락처 정보 입력
	void inputContact(char *name,
		char *phoneNumber = nullptr,
		char *email = nullptr,
		char *address = nullptr);

	//연락처 전체 목록 조회
	void printContactList();

	//연락처 상세 조회 - 함수 오버로딩
	void printContact(int index);
	void printContact(char *inName);

	//연락처 수정
	void editContactByIndex(int index,
		char *name,
		char *phoneNumber = nullptr,
		char *email = nullptr,
		char *address = nullptr);

	//연락처 복사
	void copyContact(int index);
	
	//연락처 제거
	void removeContactByIndex(int index);
};

