﻿#include "stdafx.h"
#include "Controller.h"
using namespace std;

Controller::Controller()
{
}


Controller::~Controller()
{
}

//메인 메뉴 실행
void Controller::runMainMenu()
{
	int menuNum;
	do
	{
		menu.setMenuSelection(0);	//최상위 메뉴 설정
		menuNum = menu.execution();	//메뉴 실행

		switch (menuNum)
		{
		case 1:
			runOwnerMenu();
			break;
		case 2:
			runContactMenu();
			break;
		case 3:
			cout << "프로그램을 종료합니다." << endl;
			break;
		default:
			cout << "잘못 입력 했습니다. 다시 해주세요" << endl;
			break;
		}

	} while (menuNum != 3);
}

//소유자 정보 입력
void Controller::inputOwnerInfo()
{
	char name[20];	//이름
	char phoneNumber[13];	//전화번호
	char email[30];	//이메일
	char address[50];	//주소
	char twitterAccount[20];	//트위터 계정

	cout << "소유자 이름: ";
	cin >> name;
	cout << "소유자 전화번호: ";
	cin >> phoneNumber;
	cout << "소유자 이메일: ";
	cin >> email;
	cout << "소유자 주소: ";
	cin >> address;
	cout << "소유자 트위터 계정: ";
	cin >> twitterAccount;
	cout << "입력이 완료 되었습니다." << endl;

	owner.inputOwnerInfo(name, phoneNumber, email, address, twitterAccount);
}

//소유자 정보 출력
void Controller::printOwnerInfo()
{
	owner.printOwnerInfo();
}

//소유자 정보 수정
void Controller::editOwnerInfo()
{
	char editString[50];
	int inputNum;
	cout << "1. 소유자 이름 수정" << endl;
	cout << "2. 소유자 전화번호 수정" << endl;
	cout << "3. 소유자 이메일 수정" << endl;
	cout << "4. 소유자 주소 수정" << endl;
	cout << "5. 소유자 트위터 계정 수정" << endl;
	cout << "6. 수정 없이 이전 메뉴로" << endl;
	cin >> inputNum;

	switch (inputNum)	
	{
	case 1:
		cout << "수정할 이름: ";
		cin >> editString;
		owner.editOwnerInfo(editString, nullptr, nullptr, nullptr, nullptr);
		cout << "소유자의 이름이 수정되었습니다." << endl;
		break;
	case 2:
		cout << "수정할 전화번호: ";
		cin >> editString;
		owner.editOwnerInfo(nullptr, editString, nullptr, nullptr, nullptr);
		cout << "소유자의 전화번호가 수정되었습니다." << endl;
		break;
	case 3:
		cout << "수정할 이메일: ";
		cin >> editString;
		owner.editOwnerInfo(nullptr, nullptr, editString, nullptr, nullptr);
		cout << "소유자의 이메일이 수정되었습니다." << endl;
		break;
	case 4:
		cout << "수정할 주소: ";
		cin >> editString;
		owner.editOwnerInfo(nullptr, nullptr, nullptr, editString, nullptr);
		cout << "소유자의 주소가 수정되었습니다." << endl;
		break;
	case 5:
		cout << "수정할 트위터 계정 : ";
		cin >> editString;
		owner.editOwnerInfo(nullptr, nullptr, nullptr, nullptr, editString);
		cout << "소유자의 트위터 계정이 수정되었습니다." << endl;
	default:
		cout << "아무것도 수정되지 않았습니다." << endl;
		break;
	}
}

//연락처 정보 입력
void Controller::addContact()
{
	char name[20];	//이름
	char phoneNumber[13];	//전화번호
	char email[30];	//이메일
	char address[50];	//주소
	cout << "연락처 이름: ";
	cin >> name;
	cout << "연락처 전화번호: ";
	cin >> phoneNumber;
	cout << "연락처 이메일: ";
	cin >> email;
	cout << "연락처 주소: ";
	cin >> address;

	contacts.inputContact(name, phoneNumber, email, address);
}

//연락처 전체 목록 조회
void Controller::printContactList()
{
	contacts.printContactList();
}

//연락처 상세 조회
void Controller::printContactDetail()
{
	int inputNum;
	int index;
	char name[20];
	cout << "1. index로 연락처 조회" << endl;
	cout << "2. 이름으로 연락처 조회" << endl;
	cin >> inputNum;

	switch (inputNum)
	{
	case 1:
		cout << "조회할 연락처 index: ";
		cin >> index;
		contacts.printContact(index);
		break;
	case 2:
		cout << "조회할 연락처 이름: ";
		cin >> name;
		contacts.printContact(name);
		break;
	default:
		cout << "잘못 입력했습니다. 이전 메뉴로 돌아갑니다." << endl;
		break;
	}
}

//연락처 수정
void Controller::editContact()
{
	int index;
	cout << "수정할 연락처 index: ";
	cin >> index;

	char editString[50];
	int inputNum;
	cout << "1. 연락처 이름 수정" << endl;
	cout << "2. 연락처 전화번호 수정" << endl;
	cout << "3. 연락처 이메일 수정" << endl;
	cout << "4. 연락처 주소 수정" << endl;
	cout << "5. 수정 없이 이전 메뉴로" << endl;
	cin >> inputNum;

	switch (inputNum)
	{
	case 1:
		cout << "수정할 이름: ";
		cin >> editString;
		contacts.editContactByIndex(index, editString, nullptr, nullptr, nullptr);
		cout << "연락처 이름이 수정되었습니다." << endl;
		break;
	case 2:
		cout << "수정할 전화번호: ";
		cin >> editString;
		contacts.editContactByIndex(index, nullptr, editString, nullptr, nullptr);
		cout << "연락처 전화번호가 수정되었습니다." << endl;
		break;
	case 3:
		cout << "수정할 이메일: ";
		cin >> editString;
		contacts.editContactByIndex(index, nullptr, nullptr, editString, nullptr);
		cout << "연락처 이메일이 수정되었습니다." << endl;
		break;
	case 4:
		cout << "수정할 주소: ";
		cin >> editString;
		contacts.editContactByIndex(index, nullptr, nullptr, nullptr, editString);
		cout << "연락처 주소가 수정되었습니다." << endl;
		break;
	default:
		cout << "아무것도 수정되지 않았습니다." << endl;
		break;
	}
}

//연락처 복사
void Controller::copyContact()
{
	int index;
	cout << "복사할 연락처 index: ";
	cin >> index;
	contacts.copyContact(index);
}

//연락처 제거
void Controller::removeContact()
{
	int index;
	cout << "삭제할 연락처 index: ";
	cin >> index;
	contacts.removeContactByIndex(index);
}

//소유자 메뉴 실행
void Controller::runOwnerMenu()
{
	int menuNum;
	do {
		menu.setMenuSelection(1);
		menuNum = menu.execution();

		switch (menuNum)
		{
		case 1:
			inputOwnerInfo();
			break;
		case 2:
			printOwnerInfo();
			break;
		case 3:
			editOwnerInfo();
			break;
		case 4:
			cout << "이전 메뉴로 돌아 갑니다." << endl;
			break;
		default:
			cout << "잘못 입력 했습니다. 다시 해주세요" << endl;
			break;
		}
	} while (menuNum != 4);
}

//연락처 메뉴 실행
void Controller::runContactMenu()
{
	int menuNum;
	do
	{
		menu.setMenuSelection(2);
		menuNum = menu.execution();

		switch (menuNum)
		{
		case 1:
			addContact();
			break;
		case 2:
			printContactList();
			break;
		case 3:
			printContactDetail();
			break;
		case 4:
			editContact();
			break;
		case 5:
			copyContact();
			break;
		case 6:
			removeContact();
			break;
		case 7:
			cout << "이전 메뉴로 돌아 갑니다." << endl;
			break;
		default:
			cout << "잘못 입력 했습니다. 다시 해주세요" << endl;
			break;
		}

	} while (menuNum != 7);
}
