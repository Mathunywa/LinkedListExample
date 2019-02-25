// LinkedList Example : Console Application
// this applicatin shows something
#include "stdafx.h"
#include "MyList.h" 
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[]){
	List L;
	Init (L);
	Insert ("musa", L); Insert ("jane", L); Insert ("smile", L); ShowData (L);
	Delete ("jane",L);ShowData (L); 
	
	
	system("pause");
	return 0;
}//very good codes

