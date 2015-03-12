#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include <stdint.h>

using namespace std;

template <class T>
void endswap(T *objp)
{
  unsigned char *memp = reinterpret_cast<unsigned char*>(objp);
  reverse(memp, memp + sizeof(T));
}

int main() {
	vector<char> buffer(69); // create a buffer
	string line;

	ifstream input;
	input.open("openbookultraAZ_A20130403_1_of_1");

	string outputData = "";

	for(int i = 0; i < 5; i++) {
		int MsgSeqNumTemp; char MsgSeqNum[3];
		input.read( reinterpret_cast<char*>(&MsgSeqNumTemp) , sizeof(int) );
		endswap( &MsgSeqNumTemp );
		sprintf(MsgSeqNum, "%d", MsgSeqNumTemp);

		short int MsgTypeTemp; char MsgType[3];
		input.read( reinterpret_cast<char*>(&MsgTypeTemp) , sizeof(short int) );
		endswap( &MsgTypeTemp );
		sprintf(MsgType, "%d", MsgTypeTemp);

		int SendTimeTemp; char SendTime[50];
		input.read( reinterpret_cast<char*>(&SendTimeTemp) , sizeof(int) );
		endswap( &SendTimeTemp );
		sprintf(SendTime, "%d", SendTimeTemp);

		char Symbol[11];
		input.read( reinterpret_cast<char*>(&Symbol) , sizeof(char[11]) );

		short int MsgSizeTemp; char MsgSize[3];
		input.read( reinterpret_cast<char*>(&MsgSizeTemp) , sizeof(short int) );
		endswap( &MsgSizeTemp );
		sprintf(MsgSize, "%d", MsgSizeTemp);

		short int SecurityIndexTemp; char SecurityIndex[5];
		input.read( reinterpret_cast<char*>(&SecurityIndexTemp) , sizeof(short int) );
		endswap( &SecurityIndexTemp );
		sprintf(SecurityIndex, "%d", SecurityIndexTemp);

		int SourceTimeTemp; char SourceTime[50];
		input.read( reinterpret_cast<char*>(&SourceTimeTemp) , sizeof(int) );
		endswap( &SourceTimeTemp );
		sprintf(SourceTime, "%d", SourceTimeTemp);

		short int SourceTimeMicroSecsTemp; char SourceTimeMicroSecs[50];
		input.read( reinterpret_cast<char*>(&SourceTimeMicroSecsTemp) , sizeof(short int) );
		endswap( &SourceTimeMicroSecsTemp );
		sprintf(SourceTimeMicroSecs, "%d", SourceTimeMicroSecsTemp);

		char QuoteConditionTemp; string QuoteCondition;
		input.read( reinterpret_cast<char*>(&QuoteConditionTemp) , sizeof(char) );
		QuoteCondition = QuoteConditionTemp;

		char TradingStatusTemp; string TradingStatus;
		input.read( reinterpret_cast<char*>(&TradingStatusTemp) , sizeof(char) );
		TradingStatus = TradingStatusTemp;

		int SourceSeqNumTemp; char SourceSeqNum[50];
		input.read( reinterpret_cast<char*>(&SourceSeqNumTemp) , sizeof(int) );
		endswap( &SourceSeqNumTemp );
		sprintf(SourceSeqNum, "%d", SourceSeqNumTemp);

		char SourceSessionIDTemp; int SourceSessionIDTemp2; char SourceSessionID[10];
		input.read( reinterpret_cast<char*>(&SourceSessionIDTemp) , sizeof(char) );
		SourceSessionIDTemp2 = int(SourceSessionIDTemp);
		sprintf(SourceSessionID, "%d", SourceSessionIDTemp2);

		char PriceScaleCodeTemp; int PriceScaleCodeTemp2; char PriceScaleCode[10];
		input.read( reinterpret_cast<char*>(&PriceScaleCodeTemp) , sizeof(char) );
		PriceScaleCodeTemp2 = int(PriceScaleCodeTemp);
		sprintf(PriceScaleCode, "%d", PriceScaleCodeTemp2);

		int PriceNumeratorTemp; char PriceNumerator[10];
		input.read( reinterpret_cast<char*>(&PriceNumeratorTemp) , sizeof(int) );
		endswap( &PriceNumeratorTemp );
		sprintf(PriceNumerator, "%d", PriceNumeratorTemp);

		int VolumeTemp; char Volume[10];
		input.read( reinterpret_cast<char*>(&VolumeTemp) , sizeof(int) );
		endswap( &VolumeTemp );
		sprintf(Volume, "%d", VolumeTemp);

		int ChgQtyTemp; char ChgQty[10];
		input.read( reinterpret_cast<char*>(&ChgQtyTemp) , sizeof(int) );
		endswap( &ChgQtyTemp );
		sprintf(ChgQty, "%d", ChgQtyTemp);

		short int NumOrdersTemp; char NumOrders[10];
		input.read( reinterpret_cast<char*>(&NumOrdersTemp) , sizeof(short int) );
		endswap( &NumOrdersTemp );
		sprintf(NumOrders, "%d", NumOrdersTemp);

		char SideTemp; int SideTemp2; char Side[10];
		input.read( reinterpret_cast<char*>(&SideTemp) , sizeof(char) );
		SideTemp2 = int(SideTemp);
		sprintf(Side, "%d", SideTemp2);

		char Filler1Temp; int Filler1Temp2; char Filler1[10];
		input.read( reinterpret_cast<char*>(&Filler1Temp) , sizeof(char) );
		Filler1Temp2 = int(Filler1Temp);
		sprintf(Filler1, "%d", Filler1Temp2);

		char ReasonCodeTemp; int ReasonCodeTemp2; char ReasonCode[10];
		input.read( reinterpret_cast<char*>(&ReasonCodeTemp) , sizeof(char) );
		ReasonCodeTemp2 = int(ReasonCodeTemp);
		sprintf(ReasonCode, "%d", ReasonCodeTemp2);

		char Filler2Temp; int Filler2Temp2; char Filler2[10];
		input.read( reinterpret_cast<char*>(&Filler2Temp) , sizeof(char) );
		Filler2Temp2 = int(Filler2Temp);
		sprintf(Filler2, "%d", Filler2Temp2);

		int LinkID1Temp; char LinkID1[10];
		input.read( reinterpret_cast<char*>(&LinkID1Temp) , sizeof(int) );
		endswap( &LinkID1Temp );
		sprintf(LinkID1, "%d", LinkID1Temp);

		int LinkID2Temp; char LinkID2[10];
		input.read( reinterpret_cast<char*>(&LinkID2Temp) , sizeof(int) );
		endswap( &LinkID2Temp );
		sprintf(LinkID2, "%d", LinkID2Temp);

		int LinkID3Temp; char LinkID3[10];
		input.read( reinterpret_cast<char*>(&LinkID3Temp) , sizeof(int) );
		endswap( &LinkID3Temp );
		sprintf(LinkID3, "%d", LinkID3Temp);

		outputData += "MsgSeqNum: " + string(MsgSeqNum) + string("\n");
		outputData += "MsgType: " + string(MsgType) + string("\n");
		outputData += "SendTime: " + string(SendTime) + string("\n");
		outputData += "Symbol: " + string(Symbol) + string("\n");
		outputData += "MsgSize: " + string(MsgSize) + string("\n");
		outputData += "SecurityIndex: " + string(SecurityIndex) + string("\n");
		outputData += "SourceTime: " + string(SourceTime) + string("\n");
		outputData += "SourceTimeMicroSecs: " + string(SourceTimeMicroSecs) + string("\n");
		outputData += "QuoteCondition: " + string(QuoteCondition) + string("\n");
		outputData += "TradingStatus: " + TradingStatus + string("\n");
		outputData += "SourceSeqNum: " + string(SourceSeqNum) + string("\n");
		outputData += "SourceSessionID: " + string(SourceSessionID) + string("\n");
		outputData += "PriceScaleCode: " + string(PriceScaleCode) + string("\n");
		outputData += "PriceNumerator: " + string(PriceNumerator) + string("\n");
		outputData += "Volume: " + string(Volume) + string("\n");
		outputData += "ChgQty: " + string(ChgQty) + string("\n");
		outputData += "NumOrders: " + string(NumOrders) + string("\n");
		outputData += "Side: " + string(Side) + string("\n");
		outputData += "Filler: " + string(Filler1) + string("\n");
		outputData += "ReasonCode: " + string(ReasonCode) + string("\n");
		outputData += "Filler: " + string(Filler2) + string("\n");
		outputData += "LinkID1: " + string(LinkID1) + string("\n");
		outputData += "LinkID2: " + string(LinkID2) + string("\n");
		outputData += "LinkID3: " + string(LinkID3) + string("\n\n\n");
	}

	cout << outputData;
}
