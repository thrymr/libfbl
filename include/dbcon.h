#ifndef DBCON_H
#define DBCON_H

#include <libpq-fe.h>

typedef struct {
	PGconn * conn;	
} DBCon;

DBCon * initDBCon(const char * host,
		  const char * port,
		  const char * dbname, 
		  const char * username,
		  const char * password);

void closeDBCon(DBCon * dbcon);

#endif
