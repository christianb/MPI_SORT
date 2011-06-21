#ifndef _FILETUIL_H
#define _FILEUTIL_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <list>
#include <cstring>


using namespace std;

class FileUtil {
public:	

/**
 	 * Construct a new FileUtil instance.

	 * @param rank The rank of this prozess.
	 * @param size The total number of prozesses.
	 */
	FileUtil(int rank, int size);

list<char*>* readAllPosition(list<int*> *coursors);

void printWords(list<char*> *words);

list<int*>* readFilePositions();

list<char*>* readFile();

private:
	int mRank;
	int mSize;

};

#endif	/* _FILEUTIL_H */