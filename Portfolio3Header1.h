//header

#ifndef PORT_3_H 
#define PORT_3_H

#include <vector>

using namespace std;

class Port3 {
public:
	Port3(int rowtable, int columntable, const vector<int>& birthcountingtracker, const vector<int>& survivalcountingtracker);

	void changegridatrandom(double percentagetobealive = 0.3);

	void cout() const;

	// check to determine the health status of cell

	bool getcell(int a, int b) const;
	//counts neighbors (tracker)
	int getneighborcounter(int a, int b) const;
	
	void gouponegen();
private: 
	int setuprows;
	int setupcolumns;

	vector<vector<bool>> grid1, grid2;
	vector<bool>setbirthrule, setsurvivalrule;


	void changestateofgame();

	//check the validity that row/column set is listed in a grid

	bool inrangeofgrid(int a, int b) const;

	

};




#endif

//.