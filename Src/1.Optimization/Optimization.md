# 최적화란
-> 하드웨어, OS에 종속된 최적화는 제외하고 설명
***
## 1.1 최적화는 소프트웨어 개발의 일부입니다.
- 최적화는 다른 코딩 작업보다 과학적 사고방식을 더 많이 요구하는 실험 과학이다.
- 경험을 통한 직관을 가지고 테스트하지 않으면 자주 틀리게 된다.
***
## 1.2 최적화는 효과적입니다.
- 숙련된 팀의 코드도 개선의 여지가 있다.
- 실행 불가능해 보이는 느린 프로그램도 배포할 정도로 빠르게 바꿀 수 있다.
***
## 1.3 최적화해도 괜찮습니다.
- 섣부른 최적화는 만악의 근원이다.  
  하지만 간단하면서 효율적인 코드를 쓰는 습관을 들여야 한다.
- 누구나 아는 효율적인 코드를 안쓸 이유는 없다.  
  ex) 버블정렬 -> 퀵정렬
***
## 1.4 여기에 나노초, 저기에 나노초
- 컴퓨터 성능은 50년 만에 600만배 정도 향상 되었다.
- 하지만 불필요한 코드는 실행되는 속도가 아무리 빨라도 그 코드를 실행 안하는 것보다 빠를 순 없다.
***
## 1.5 C++ 코드 최적화 전략 요인
-> C++에는 함수 호출, 메모리 할당, 루프 등 최적화 대상이 되는 '유력 용의자'들이 있다.
### 1.5.1 더 좋은 컴파일러를 더 잘 사용하세요
- 더 좋은 컴파일러를 사용하라는 말은 곧 컴파일러를 더 잘 사용하라는 의미이다.
- 예를 들어 프로그램이 느려 보인다면 컴파일러를 살펴보고 최적화 설정이 켜져있는지 확인한다.
### 1.5.2 더 좋은 알고리즘을 사용하세요
- 최적화의 빅뱅은 최적의 알고리즘 선택에서 비롯된다.
### 1.5.3 더 좋은 라이브러리를 사용하세요
- 표준 라이브러리는 범용적이면서도 매우 견고해야하기 때문에 실행 속도를 크게 신경쓰지 않는다.
- 필요에 따라서 설계상 절충점을 취함으로 빠르게 동작하는 라이브러리를 사용한다.
### 1.5.4 메모리 할당과 복사를 줄이기
- C++ 언어 기능은 대부분 비용이 많이 들어봐야 명령 몇 줄에 불과하지만 메모리 관리자 호출 비용은 수천 줄에 달한다.
- 많은 복사를 줄이면 복사로 인해 발생하는 버그도 줄어든다.
### 1.5.5 계산 제거하기
- 많은 반복이 이뤄지는 루프 내에 계산을 줄이면 효과적인 성능 향상이 가능하다.
- 그 외에 자주 호출되지 않는 부분에 개선은 성능에 큰 차이가 없다.
### 1.5.6 더 좋은 자료구조 사용하기
- 항목의 삽입, 반복, 정렬, 검색을 위한 알고리즘이 자료구조에 의존하는 런타임 비용을 가진다.
- 자료구조에 따라 캐시 지역성이 좋을 수도 있고 나쁠 수도 있다.
### 1.5.7 동시성 증가시키기
- 최신 컴퓨터에는 명령을 실행하는데 사용할 수 있는 프로세서 코어가 두 개 이상 있다.
- 작업을 여러 프로세서로 나눌 수 있다면 더 빨리 완료할 수 있다.
### 1.5.8 메모리 관리자 최적화하기
- C++에는 메모리 관리를 위한 수많은 API가 있지만 대부분의 개발자는 이 API를 사용하지 않는다.  
  13장에서 메모리 관리 성능 향상을 위한 몇 가지 기법을 보여준다.
***
## 1.6 마치며
- 위의 내용들에서 골치 아픈 내용은 세부적인 내용에 있다. 힘내보자!
