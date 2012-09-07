#include <assert.h>
#include <stdlib.h>


#include "include/libfbl.h"
#include "include/dbcon.h"



int main(int argc, char **argv){

	DBCon * con = initDBCon("localhost", "", "", "", "");
	closeDBCon(con);
	return 0;
}
