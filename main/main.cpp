#include <iostream>

#include "roman.h"

using namespace std;

int main() {

	arabic num = { 3999 };

	roman num2 = { "VII" };

	converter conv;

	cout << "Your entered arabic value is "<<num.value << endl;

	cout <<"If we convert it to Roman it will be = " << conv.toRoman(num).value << endl;
	
	cout <<"Let's check if you entered roman value right (1 - it's correct, 0 - it's wrong). So : "<< conv.check(num2) << endl;

	cout <<"Your entered roman value is "<< num2.value << endl;

	cout <<"If we convert your entered roman value to Arabic it will be = "<< conv.toArabic(num2).value << endl;
  
	return 0;
}

