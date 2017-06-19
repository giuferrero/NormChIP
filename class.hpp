#ifndef __IOS_H__
	#define __IOS_H__
	#include <iostream>
#endif 

#ifndef __MATH__
	#define __MATH__
	#include <math.h>
#endif

#ifndef __STDL__
	#define __STDL__
	#include <stdlib.h>
#endif


#ifndef __STR_H__
	#define __STR_H__
	#include <string>

#endif


#ifndef __TIM_H__
	#define __TIM_H__
	#include <time.h>

#endif


#ifndef __FSTREAM__
	#define __FSTREAM__
	#include <fstream>
#endif


#ifndef __SSTREAM__
	#define __SSTREAM__
	#include <sstream>
#endif

#ifndef __ALGO__
	#define __ALGO__
	#include <algorithm>
#endif

#ifndef __VECT__
	#define __VECT__
#include <vector>
#endif

namespace VAR_NAME{

	using namespace std;

/*****************!
* Peak class
* Object containing the information of the number of row, column that 
* define the input matrices dimensions. Furthermore, it contains also 
* information of input file id and of the number of replicates
******************/

class peak{

	//! Matrix of read counts
	vector < vector < int > > count;
	
	//! Matrix of normalized read counts
	vector < vector < double > > norm_count;

	//! Median computed across normalized bins
	double median {0.0};
	
	//! Number of ChIP-Seq regions multiplied by number of bins
	int row {0};
	
	//! Number of replicates
	int column {0};
	
	//! Number of bins
	int bin {0};
	
	//! Suffix of datasets
	string input {""};

	//! Number of replicates
	int n_file {0};
	
	public:

/*****************!
* Construction method header
******************/
peak(const int r, const int c, const int b, const string & n, const int num);

/*****************!
* Methods for input retrieve
******************/
int get_row_num(){return row;};
int get_col_num(){return column;};
string get_file_name(){return input;};
int get_file_num(){return n_file;};

/*****************!
* Main methods to read the input count files and print out
******************/
void read();
void write();
void print();
void print_n();

/*****************!
* Main methods to computed the size factor for each  bins
******************/
void geo_mean();
void col_med();
void inc_count();

	};
	
};



