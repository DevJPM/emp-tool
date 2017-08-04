#ifndef PROTOCOL_EXECUTION_H__
#define PROTOCOL_EXECUTION_H__
#include <pthread.h>  
#include "emp-tool/utils/block.h"
#include "emp-tool/utils/constants.h"

class ProtocolExecution { 
public:
	int cur_party;
	static ProtocolExecution * prot_exec;

	ProtocolExecution(int party = PUBLIC) : cur_party (party) {}
	virtual ~ProtocolExecution() {}
	virtual void feed(block * lbls, int party, const bool* b, int nel) = 0;
	virtual void reveal(bool*out, int party, const block *lbls, int nel) = 0;
	virtual void finalize() {}
};

#endif
