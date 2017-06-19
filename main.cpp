#include "class.hpp"

using namespace VAR_NAME;

int main(int argc, char **argv) {
	if (argc < 4){
		
	cerr << "Some argument are missing: Please insert the number of: regions, experiment, bins. Finally the datasets suffix" << endl;
	exit(EXIT_FAILURE);
	
	}
	
	int row = atoi(argv[1])*atoi(argv[3]);
	int column = atoi(argv[2]);
	int bin = atoi(argv[3]);
	string file = string(argv[4]);
	int num = atoi(argv[2]);
	
	peak p(row, column, bin, file, num);
	
	p.read();
	//p.print();
	
	//p.inc_count();
	
	p.geo_mean();
	//p.print_n();
	
	p.col_med();
	
	//p.print_n();
	
	p.write();
	
	return EXIT_SUCCESS;
}
