#include <stdlib.h>

#include "../include/dbcon.h"


DBCon * initDBCon(const char * host,
		  const char * port,
		  const char * dbname, 
		  const char * username,
		  const char * password){
	DBCon * con = (DBCon *) malloc(sizeof(DBCon));
	con->conn = PQconnectdb("dbname = jsgcdb");
	
	return con;
}

void closeDBCon(DBCon * dbcon){
	
	PQfinish(dbcon->conn);
	free(dbcon);
	
}

