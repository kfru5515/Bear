# ATM 
## 구성 요소
**ATMController**  
   - 사용자 인증, 계좌 선택, 입금/출금 처리
   - 주요 메서드: `insert()`, `enterPin()`, `selectAccount()`, `checkBalance()`, `deposit()`, `withdraw()`

 **User**  
   - 사용자 정보(카드 번호, PIN, 계좌)를 관리
   - 주요 메서드: `getCardNumber()`, `getPin()`, `getCheckingAccount()`

 **BankAccount**  
   - 계좌 잔액을 관리하고, 입출금
   - 주요 메서드: `checkBalance()`, `deposit()`, `withdraw()`


## 기능

- 사용자 인증 (카드 번호 + PIN)
- 체크 계좌 선택
- 잔액 확인
- 입금 및 출금

input
카드 번호: "8258-5516"
PIN: 5516
입금: 1
출금: 1


output
Balance: 1000
Balance: 1001
Balance: 1000
