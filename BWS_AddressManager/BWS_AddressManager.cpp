// BWS_AddressManager.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

struct OwnerInfo {
	char name[20];	//이름
	char phoneNumber[13];	//전화번호
	char email[30];	//이메일
	char address[50];	//주소
	char twitterAccount[20];	//트위터 계정
};

struct ContactInfo
{
	char name[20];	//이름
	char phoneNumber[13];	//전화번호
	char email[30];	//이메일
	char address[50];	//주소
};

OwnerInfo owner;
ContactInfo contacts[100];
int contatNumber = 0;

int main()
{
    return 0;
}

