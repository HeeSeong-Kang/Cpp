#include <iostream>
#include <stdlib.h>
#include <string.h>

#define MAX 100


using namespace std;

typedef struct{
    int account;
    char cusName[20];
    int balance;
}BANK;

BANK bank[MAX];
int arrNum = 0;

void BankMenu(void)
{
    cout<<"----Menu----"<<endl;
    cout<<"1. 계좌개설"<<endl;
    cout<<"2. 입 금"<<endl;
    cout<<"3. 출 금"<<endl;
    cout<<"4. 계좌정보 전체 출력"<<endl;
    cout<<"5. 프로그램 종료"<<endl;
    cout<<"선택: ";
}

void BankOpenAccount(BANK *bank)
{
    BANK *b;
    b = (BANK*)malloc(1);
    
    cout<<"[계좌개설]"<<endl;
    cout<<"계좌ID: "; cin>>b->account;
    cout<<"이 름: "; cin>>b->cusName;
    cout<<"입금액: "; cin>>b->balance;

    bank[arrNum].account = b->account;
    bank[arrNum].balance = b->balance;
    strcpy(bank[arrNum].cusName, b->cusName);
    arrNum++;

    free(b);
}

void BankDeposit(BANK *bank)
{
    BANK *b = (BANK*)malloc(1);

    cout<<"[입   금]"<<endl;
    cout<<"계좌ID: "; cin>>b->account;
    for(int i=0; i<arrNum; i++){
        if(bank[i].account == b->account){
            cout<<"입금액: "; cin>>b->balance;
            bank[i].balance += b->balance;
            cout<<"입금완료";
            return;
        }
    }
    cout<<"유효하지 않는 ID 입니다."<<endl;
    
    free(b);
}

void BankWithdraw(BANK *bank)
{
    BANK *b = (BANK*)malloc(1);

    cout<<"[출   금]"<<endl;
    cout<<"계좌ID: "; cin>>b->account;
    for(int i=0; i<arrNum; i++){
        if(bank[i].account == b->account){
            cout<<"출금액: "; cin>>b->balance;
            if(bank[i].balance < b->balance)
                cout<<"잔액이 부족합니다!"<<endl;
            bank[i].balance -= b->balance;
            cout<<"출금완료";
            return;
        }
    }
    cout<<"유효하지 않는 ID 입니다."<<endl;
    
    free(b);
}

void BankPrint(BANK *bank)
{
    BANK *b = (BANK*)malloc(1);

    cout<<"계좌ID: "; cin>>b->account;
    for(int i=0; i<arrNum; i++){
        if(bank[i].account == b->account){
            cout<<"이름: "<< bank[i].cusName<<endl;
            cout<<"잔액: "<< bank[i].balance<<endl;
            return;
        }
    }
    cout<<"유효하지 않는 ID 입니다."<<endl;
    
    free(b);
}

int main(void)
{
    int select;

    while(1)
    {
        BankMenu();
        cin>>select;

        switch (select)
        {
        case 1:
            BankOpenAccount(bank);
            break;
        case 2:
            BankDeposit(bank);
            break;
        case 3:
            BankWithdraw(bank);
            break;
        case 4:
            BankPrint(bank);
            break;
        case 5:
            return 0;
            break;
        default:
            break;
        }
    }
    
    return 0;
}