#pragma once

/*
@brief
*/
struct BigNumber
{
	short* arr;
	int size;
};

/*
*/
struct BigNumber* MemoryOfNum(char* num);

int Diff(struct BigNumber* obj1, struct BigNumber* obj2);
/*
*/
int PrintLongNumber(struct BigNumber* obj);

/*
*/
int Summ(struct BigNumber* obj1, struct BigNumber* 
