# ⏱️ Stopwatch

## 사용방법

프로그램을 실행하고, 자신이 Stop하고 싶을때!
**SpaceBar**을(를) 클릭하면 멈추게 되고,
아래에 시간을 표시해준다.

## 코드설명

### 헤더파일(.h)
```C++
C 언어의 표준 라이브러리 함수의 매크로 정의, 상수, 여러 형의 입출력 함수가 포함된 헤더 파일입니다.
#include <stdio.h>

콘솔 입출력 함수를 제공하는 헤더파일 입니다.
#include <conio.h>

윈도우 개발자들이 필요한 모든 매크로들, 다양한 함수들과 서브시스템에서 사용되는 모든 데이터 타입들 그리고 윈도우 API의 함수들을 위한 정의를 포함하는 윈도우의 C 및 C++ 헤더 파일입니다.
#include <Windows.h>
```

### 콘솔 코드

> 0 = 검은색    
> 1 = 파란색    
> 2 = 녹색    
> 3 = 청록색    
> 4 = 빨간색    
> 5 = 자주색    
> 6 = 노란색    
> 7 = 흰색    
> 8 = 회색    
> 9 = 연한 파란색    
> A = 연한 녹색    
> B = 연한 청록색    
> C = 연한 빨간색    
> D = 연한 자주색    
> E = 연한 노란색    
> F = 밝은 흰색    

Color:
```C++
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 색깔번호);
```
콘솔창 글씨의 색깔을 변경합니다.

cls:
```C++
system("cls");
```
위에 있던 내용들을 삭제시켜서,   
처음과 같이 깨끗한 콘솔창으로 만듭니다.

### 기타코드

Sleep()함수:
```C++
Sleep(1000);
```
**Tip! 1000은 1초를 의미합니다. 즉, 500은 0.5초**

getchar()함수:
```C++
getchar();
```
문자 전용 입력함수이며, 문자 한개만 입력받습니다.

kbhit()함수:
```C++
_kbhit();
```
키보드가 입력되었는지를 확인하는 함수입니다.

getch()함수:
```C++
_getch();
```
문자 전용 입력함수이며, 문자 한개만 읽어들인다.   

+getche()함수:
```C++
_getche();
```
문자 전용 입력함수이며, 문자 한개만 읽어들인다.   

> 위 getch()함수와 getche()함수의 차이점은   
> getche()함수는 입력한 키가 보이고,   
> getch()함수는 입력한 키가 보이지 않는다.   

**결론은 두함수의 차이는 보안적인 차이가 크다.**   

# 마치며

피드백, 문제, 오류등 해당 코드관련 질문들은   
아래 디스코드 서버에서 해주시면 감사하겠습니다.   

**LINK:**

***장난식으로 행동 할 시 불이익이 있을 수 있음.***
