#include <iostream>
#include "TheReasonOfBitcoin.h"

using namespace std;



TheReasonOfBitcoin::TheReasonOfBitcoin(int x, int y)
	: BTCint(x), BTCConstInt(y)
{
}


void TheReasonOfBitcoin::ShowThings()
{
	cout << "Bitcoin right now is " << BTCint << "\nBut Bitcoin is constantly " << BTCConstInt << endl;
}



TheReasonOfBitcoin::~TheReasonOfBitcoin()
{
}
