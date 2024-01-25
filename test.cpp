// #include <iostream>


// int main()
// {
// std::cout <<"Hello C++"<<std::endl;
// //주어   동사 목적어   동사 목적어 마침표
// }

// #include <iostream>
// #include <limits>

// int main() {
//     float f1 = 1.23456;
//     double d1 = 1.23456;

//     const double epsilon = std::numeric_limits<double>::epsilon();

//    if (std::abs(static_cast<double>(f1) - d1) < epsilon) {
//         std::cout << "두 값은 거의 같습니다." << std::endl;
//     } else {
//         std::cout << "두 값은 다릅니다." << std::endl;
//     }

//     return 0;
// }
// // 두 값은 다릅니다 ?


// #include <iostream>
// #include <typeinfo>
// using namespace std;

// int main()
// {
//     int x =123;
//     long y =140;
//     double z = 114.56;

//     cout << typeid(x+y).name() << endl; //long
//     cout << x + y << endl << endl;

//     cout << typeid(x+y+z).name() << endl; //double
//     cout<< x+y+z << endl;
//     return 0;

// #include <iostream>
// #include <iomanip>

// #include <limits>
// using namespace std;

// int main()
// {
//     //변수선언
//     double number;
//     int intPart;
//     double fractPart;
//     //입력받기
//     cout << "부동소수점 입력 : ";
//     cin >> number;
//     //처리
//     //intPart = static_cast<int>(number);
//     intPart = number;
//     fractPart = number - intPart;
//     //출력
//     cout << fixed << showpoint << setprecision(6);
//     cout << "원래 값 : " << number << endl;
//     cout << "정수 부분 : " << intPart << endl;
//     cout << "소수점 아래 부분 : " << fractPart << endl;

//     cout << "max value of int type : " << numeric_limits<int>::max() << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     //변수선언
//     unsigned int givenInt, firstDigit;
//     //입력받기
//     cout << "양의 정수 입력 : ";
//     cin >> givenInt;
//     //처리
//     firstDigit = givenInt % 10;
//     //출력
//     cout << "입력한 정수 " << givenInt << endl;
//     cout << "첫 번째 자리수 추출 : " << firstDigit << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     //변수 선언
//     unsigned long duration, hours, minutes, seconds;
//     //입력 받기
//     cout <<"초 단위 시간을 양의 정수로 입력 : ";
//     cin >> duration;
//     //처리
//     hours = duration / 3600L;
//     minutes = (duration - hours * 3600L) / 60L;
//     seconds = duration - (hours*3600L) - (minutes * 60);
//     //출력
//     cout << "입력된 초 단위 시간 : " << duration << endl;
//     cout << "결과 : ";
//     cout << hours << "시 ";
//     cout << minutes << "분 ";
//     cout << seconds << "초 ";
//     return 0;
// }

// *학생 점수 3개 최소값 최대값 평균 계산 학생 점수 찾기?

// #include <iostream>
// using namespace std;

// int main()
// {
//     // 변수 선언
//     int score1, score2, score3, maxScore, minScore, score;
//     // 입력 받기
//     cout << "첫번째 점수 : ";
//     cin >> score1;

//     cout << "두번째 점수 : ";
//     cin >> score2;

//     cout << "세번째 점수 : ";
//     cin >> score3;

//     // 가장 큰 점수 찾기
//     if(score1 > score2 && score1 > score3)
//     {
//         maxScore = score1;
//     }
//     else if(score2 > score1 && score2 > score3)
//     {
//         maxScore = score2;
//     }
//     else
//     {
//         maxScore = score3;
//     }
//     // 가장 작은 점수 찾기
//     if(score1 < score2 && score1 < score3)
//     {
//         minScore = score1;
//     }
//     else if(score2 < score1 && score2 < score3)
//     {
//         minScore = score2;
//     }
//     else
//     {
//         minScore = score3;
//     }
    
//     int temp = maxScore + minScore;
//     if(temp % 2 == 1)
//     {
//         temp += 1;
//     }
//     score = temp/2;
    
//     //결과 출력
//     cout << " 입력점수 = " << score1 << " " << score2 << " " << score3 << endl;
//     cout << "최소점수와 최대 점수 = ";
//     cout << minScore << " " << maxScore << endl;
//     cout << "학생성적 = " << score;
//     return 0;
//     }
    

/*
4가지 서로 다른 소득 범위 기반 세금 계산 및 출력
*/
#include <iostream>
using namespace std;

int main()
{
    //변수 선언
    double income, tax ;
    bool bracket1, bracket2, bracket3, bracket4 ;
    double limit1 = 10000.00, limit2 = 50000.00, limit3 = 100000.00 ;
    double rate1 = 0.05, rate2 = 0.10, rate3 = 0.15, rate4 = 0.20;
    //입력받기
    cout << "수입을 달러로 입력하세요 : " ;
    cin >> income;
    //소득 범위 찾기
    bracket1 = (income <= limit1) && (income >= 0);
    bracket2 = (income > limit1) && (income <= limit2);
    bracket3 = (income > limit2) && (income <= limit3);
    bracket4 = (income > limit3);
    //세금 계산
    if(bracket1)
    {
        tax = income * rate1 ;
    }
    else if (bracket2)
    {
        tax = limit1 * rate1 + (income- limit1) * rate2 ;
    }
    else if (bracket3)
    {
        tax = limit1 * rate1 + (limit2- limit1) * rate2 + (income-limit2) * rate3 ; 
    }
    else if (bracket4)
    {
        tax = limit1 * rate1 + (limit2- limit1) * rate2 + (limit3 - limit2) * rate3 + (income-limit3) * rate4 ;
    }
    else
    {
        cout << "wrong input" ;
        return 0 ;
    }
    //수입과 세금 출력
    cout << "수입 = " << income << endl;
    cout << "세금 = " << tax;
    return 0;
}
