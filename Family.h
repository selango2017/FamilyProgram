#pragma once

#ifndef ANIMALS_H
#define ANIMALS_H
#include <string>
#include <iostream>
#include <vector>


using namespace std;

struct Person {
	char firstName[30];
	char lastName[30];
	int age;
};

class Family
{
private:
	char name[30];
	Person Parent[2];
	Person Children[10];
	
	
public:
	
	void setName(char[30]);
	char * getName();
	Person * getParents();
	Person * getChildren();
	void setParent(char [], char [], int, int);
	void setChildren(char [], char [], int, int);
};
#endif
