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

	void inputOwnerInfo();	//소유자 정보 입력
	void printOwnerInfo();	//소유자 정보 출력
	void editOwnerInfo();	//소유자 정보 수정

	void addContact();	//연락처 정보 입력
	void printContactList();	//연락처 전체 목록 조회
	void printContactDetail();	//연락처 상세 조회
	void editContact();	//연락처 수정
	void copyContact();	//연락처 복사
	void removeContact();	//연락처 제거
	void runOwnerMenu();	//소유자 메뉴 실행
	void runContactMenu();	//연락처 메뉴 실행
public:
	Controller();
	~Controller();

	void runMainMenu();	//메인 메뉴 실행
};

