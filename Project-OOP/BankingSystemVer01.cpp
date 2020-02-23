/* 
 * Banking System Ver 0.1
 * Author    : Roytravel
 * Content   : This program can be a system which is like a bank. 
 * Last-Date : 2020-02-23
*/

#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);


typedef struct
{
	int accID;
	int balance;
	char cusName[NAME_LEN];
}Account;

Account accArr[100];
int accNum = 0;

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

int main(void) 
{
	int choice;
	
	while (1)
	{
		ShowMenu();
		cout << "선택: ";
		cin >> choice;
		cout << endl;
		
		switch (choice)
		{
			case MAKE:
				MakeAccount();
				break;
				
			case DEPOSIT:
				DepositMoney();
				break;
				
			case WITHDRAW:
				WithdrawMoney();
				break;
				
			case INQUIRE:
				ShowAllAccInfo();
				break;
				
			case EXIT:
				return 0;
			
			default:
				cout << "Illegal selection.." << endl;
		}
	}
	return 0;
}


void ShowMenu(void)
{
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}


void MakeAccount(void)
{
	int id;
	char name[NAME_LEN];
	int balance;
	
	cout << "[계 좌 개 설]" << endl;
	cout << "계좌번호 : "; cin >> id;
	cout << "이 름 : "; cin >> name;
	cout << "입금액 : "; cin >> balance;
	cout << endl;
	
	accArr[accNum].accID = id;
	accArr[accNum].balance = balance;
	strcpy(accArr[accNum].cusName, name);
	accNum = accNum + 1;
	cout << "[+] 계좌 개설 완료" << endl << endl;
}


void DepositMoney(void)
{
	int money;
	int id;
	
	cout << "[입 금]" << endl;
	cout << "계 좌 번 호 : "; cin >> id;
	cout << "입 금 액 : "; cin >> money;
	
	for (int i = 0; i< accNum; i++) 
	{ 
		if (accArr[i].accID==id)
		{
			accArr[i].balance = accArr[i].balance + money;
			cout << endl << "[+] 입 금 완 료" << endl;
			cout << "[+] 잔 액 : " << accArr[i].balance << "원" << endl << endl;
			return ;
		}
	}
	cout << "[+] 유효하지 않은 계좌번호입니다." << endl << endl;
}


void WithdrawMoney(void)
{
	int money;
	int id;
	
	cout << "[출 금]" << endl;
	cout << "계 좌 번 호 : "; cin >> id;
	cout << "출 금 액 : "; cin >> money;
	
	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID == id) 
		{
			if (accArr[i].balance >= money)
			{
				accArr[i].balance = accArr[i].balance - money;
				cout << "[+] 출 금 완 료" << endl;
				cout << "[+] 잔 액 : " << accArr[i].balance << "원" << endl;
				return ;
				
			}
			
			else
			{
				cout << endl << "[+] 잔 액 부 족 (" << accArr[i].balance - money << "원)" <<endl;
				cout << "[+] 잔 액 : " << accArr[i].balance << "원" << endl << endl;
				return ;
			}
		}
	}
	cout << "[+] 유효하지 않은 계좌번호입니다." << endl << endl;
}


void ShowAllAccInfo(void)
{
	for (int i = 0; i < accNum; i++)
	{
		cout << "계좌번호 : " << accArr[i].accID << endl;
		cout << "이 름 : " << accArr[i].cusName << endl;
		cout << "잔 액 : " << accArr[i].balance << endl << endl;
	}
}

