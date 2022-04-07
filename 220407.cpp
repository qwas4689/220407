#include <iostream>
#include <string>
using namespace std;

int main()
{

    /*
        연산자
        데이터를 가공(연산)하는 모든 명령에 모든 명령에 필요한 것들
        1)  여떤 종류의 연산자들이 있는지?
        2)  우선 순위 : 어떤 순서로 연산이 진행되는지?
        3)  결합 순서 : 좌측부터 연산하는 연산자, 우측부터 연산하는 연산자

        1.  사칙연산 : 산술연산자 (좌측부터 연산)
        +   :  더하기
        -    :  빼기
        *    :  곱하기
        /    :  나누기      11 / 3 = 3
        %   :  나머지      11 % 3 = 2

        *, /, % > +, -

        2.  대입 연산자 (우측부터 연산) ex)     int left_value = 11 + 3;   left_value 는 14가 된다
        = : 왼쪽 항에 오른쪽 항의 값을 대입한다.(복사한다)

        3.  복합대입연산자
        += : a += b;    =>   a = a + b;
        -= : a -= b;    =>  a = a - b;
        *= : a *= b;    =>   a = a * b;
        /= : a /= b;    =>   a = a / b;
        %= : a %= b;    =>   a = a % b; (a와 b는 정수형타입이어야 한다)

        4.  증감연산자
        특정 변수의 값을 1씩 증가시키거나 감소시킬 때 사용한다.
        변수의 앞이나 뒤에 ++ / -- 를 붙여서 사용한다.

        5.  관계연산자
        두 값을 비교한 결과가 참(1, true)인지 거짓(0,false)인지 반환하는 연산자

        <  :  a  <  b : 왼쪽 항의 값이 오른쪽 항의 값보다 작으면 참을 반환한다.
        > :  a  >  b : 왼쪽 항의 값이 오른쪽 항의 값보다 크면 참을 반환한다.
        <= : 왼쪽항의 값이 오른쪽 항의 값보다 작거나 같으면 참을 반환한다.
        >= : 왼쪽항의 값이 오른쪽 항의 값보다 같거나 크면 참을 반환한다.
        == : 왼쪽항의 값과 오른쪽  항의 값이 같을 때, 참을 반환한다.
        != : 왼쪽항의 값과 오른쪽 항의 값이 다를 때, 거짓을 반환한다.
    */

    int left_value = 11;
    int right_value = 3;
    
    cout << "+ : " << left_value + right_value << endl;
    cout << "- : " << left_value - right_value << endl;
    cout << "* : " << left_value * right_value << endl;
    cout << "/ : " << left_value / right_value << endl;
    cout << "% : " << left_value % right_value << endl;

    //int left_value = 14;
    //int right_value = 3;

    ////left_value++;   //15  뒤에 붙으면 세미콜론이 붙어야 값이 바뀐다.

    //cout << left_value++ << endl; // 출력 : 14. 메모리 : 15

    ////++left_value;   //16  앞에 붙으면 실행문이 종료되기 전에 값이 바뀐다. 

    //cout << ++left_value << endl; // 메모리 : 16, 출력 : 16  --> 위의 메모리가 15이기에 15의 다음수인 16으로 된다


    //int num_one = 10;
    //int num_two = 7;

    //cout << num_one-- << endl; // 출력 : 10, 메모리 : 9
    //cout << --num_one << endl; // 메모리 : 9, 출력 : 8

    //cout << --num_two << endl; // 메모리 : 6 , 출력 : 6
    //cout << num_two-- << endl; // 출력 : 6 , 메모리 : 6


    //cout << "+= : " << (left_value += right_value) << endl;
    //left_value = 11;
    //cout << "-= : " << (left_value -= right_value) << endl;
    //left_value = 11;
    //cout << "*= : " << (left_value *= right_value) << endl;
    //left_value = 11;
    //cout << "/= : " << (left_value /= right_value) << endl;
    //left_value = 11;
    //cout << "%= : " << (left_value %= right_value) << endl;

    //변수의 값을 바꾸고 싶을 때 left_value 의 값이 계속 변한다
    //변수의 값을 고정하고 계산하고 싶을 땐 연산자를 사용하면 안된다


    //left_value += right_value;
    //cout << "-= : " << left_value << endl;

    //left_value -= right_value;
    //cout << "-= : " << left_value << endl;

    //left_value *= right_value;
    //cout << "*= : " << left_value << endl;

    //left_value /= right_value;
    //cout << "/= : " << left_value << endl;

    //left_value %= right_value;
    //cout << "%= : " << left_value << endl;

   /*
   int left_no;
    int right_no;
    cout << "앞의 숫자를 입력하시오" << endl;
    cin >> left_no;
    cout << "두번째 숫자를 입력하시오" << endl;
    cin >> right_no;
    cout << "첫번째 입력한 숫자 - 두번째 입력한 숫자 : " << left_no - right_no << endl;
    */

    // 계산기
    // 만들어보고 싶은거
   
    int one;
    int two;
    int plus;
    int minus;
    int multiplication;
    int division;
    int rest;

    cout << "연산하고 싶은 첫번째 숫자를 넣으시오";
    cin >> one;

    cout << "연산하고 싶은 두번째 숫자를 넣으시오";
    cin >> two;

    cout << "연산하고 싶은 부호를 영문으로 작성 해 주세요" << endl 
        << "더하기 : plus" << endl
        << "빼기 : minus" << endl
        << "곱하기 : multiplication" << endl
        << "나누기 : division" << endl
        << "나머지 값 : rest" << endl;

    cin >> plus, minus, multiplication, division, rest;


    /*
        실습.1
        고객의 나이를 입력받아서 미성년자(19세 이하)이면 true를 출력
        성인이면 false를 출력

        실습.2
        아까 입력 받은 나이를 기준으로 주민등록증 발급대상(20살 만)이면 true를 아니면 false를 출력.

        + 아홉수(1의 자리가 9인수) 인지 확인해서 true, false를 출력

    */

    int age;

    cout << boolalpha;
    cout << "고객의 나이를 입력하시오 : ";
    cin >> age;
    cout << "고객님은 미성년자인가요? " << (age <= 19) << endl;

    cout << "주민등록증 발급 대상인가요? " << (age == 20) << endl;

    cout << "고객님의 나이는 아홉수 인가요? " << ((age % 10) == 9) << endl;








    
}