// 210622.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	// map
	// map을 사용하기 위해서는 #include <map> 추가가 필요하다!

	// map 선언
	// map은 원소로 key와 value 한쌍을 가진다.
	// -> key와 value의 타입을 명시해야한다!!
	map<int, int>		Mymap;

	// map의 원소 삽입
	// map은 push함수를 지원하지 않는다!
	// map은 원소 삽입 시 key 값에 따라 자동 정렬이 발생한다.
	
	//// map은 원소 삽입 시 insert 함수를 사용한다.
	//Mymap.insert(1, 100);	// 불가능
	//Mymap.insert(2, 200);	// 불가능
	//Mymap.insert(3, 300);	// 불가능


	// map의 원소
	// map은 원소로 key와 value 한 쌍을 가진다.
	// 그러면 과연 어떻게 한쌍을 만들까?
	// map은 구조체 객체를 원소로 가진다!!!!!

	////// pair 구조체
	////pair<int, int>		Mypair;

	//pair<int, int>		Mypair(1, 100);
	//cout << Mypair.first << ", " << Mypair.second << endl;

	//Mypair.first = 10;
	//Mypair.second = 1000;

	//cout << Mypair.first << ", " << Mypair.second << endl;


	//// map의 원소 삽입_##1. pair객체
	//// map 컨테이너의 key 값을 상수가 된다.
	//pair<int, int>		Mypair(1, 100);
	//Mymap.insert(Mypair);

	//auto iter = Mymap.begin();

	//iter->first = 10;		// 불가능
	//iter->second = 1000;	// 가능

	//cout << (*iter).first << ", " << iter->second << endl;

	
	//// pair 임시 객체
	//Mymap.insert(pair<int, int>(1, 100));



	//// map의 원소 삽입_##2. make_pair()
	//Mymap.insert(make_pair(1, 100));
	//Mymap.insert(make_pair(2, 200));



	////// map의 원소 삽입_##3. value_type
	////// map 컨테이너 내부에 정의되어 있는 pair 구조체
	////map<int, int>::value_type		MyValueType(1, 100);

	//////MyValueType.first = 10;		// 불가능
	//////MyValueType.second = 1000;	// 가능

	////Mymap.insert(MyValueType);

	//Mymap.insert(map<int, int>::value_type(1, 100));


	//// map의 원소 삽입_##4. emplace
	//// C++11 부터 등장한 함수
	//// 삽입 함수의 이름을 획일화 시켰다.

	//Mymap.emplace(1, 100);



	//// map의 원소 삽입_##5. 유니폼 초기화
	//// C++11부터 등장한 초기화
	//// 모든 초기화를 획이화 시켰다.
	//Mymap.insert({ 1, 100 });



	// map의 원소 삽입_##6. []
	//Mymap[1] = 100;

	//Mymap.emplace(1, 100);
	//Mymap.emplace(2, 200);
	//Mymap.emplace(3, 300);

	////for (auto& pair : Mymap)
	////	cout << pair.first << ", " << pair.second << endl;

	//// 1 이라는 key값을 찾아가서 value를 반환해라!!
	//cout << Mymap[1] << endl;

	// []를 통한 원소 삽입은 insert와 많이 다르다!!
	cout << Mymap[1] << endl;

	// []와 insert의 차이점
	// insert : 중복 key 값이 있을 경우 무시
	// [] : 중복 key 값이 있을 경우 value 수정
	// -> 원소 삽입 시 []는 사용하지 않는다.

	// 원소 삽입 시 []의 작동 원리
	// ##1. [] 안에 있는 값을 토대로 key를 탐색한다.
	// -> 해당 key에 대한 원소가 있을 경우에는 value값을 반환
	
	Mymap[1] = 100;
	// -> 해당 key에 대한 원소가 없을 경우 원소를 만들어서 삽입한다. (key 1, value 0)
	// -> 이후, 해당 원소의 value값을 레퍼런스 형태로 반환한다.
	// -> 반환된 value값에 대입 연산자를 이용해서 원소를 삽입하는 형태가 된다.




    return 0;
}

