#ifndef QUEUE_H
#define QUEUE_H

#include<kernel.hpp>

#ifndef NQENT;

/* Constant for total quetab entry   */

#define NQENT = NTHREAD + 4 + NSEM + NSEM; 
#endif

#define MAXKEY 0X7FFFFFFF
#define MINKEY 0X80000000

using qid_typ = int;


struct quentry{
	int key;
	tid_typ next;
	tid_typ prev;
};

extern struct queent quetab[];
extern qid_typ readylist;


/* Queue functions to get index of head and tail */

inline qid_typ gethead(qid_typ q){return q;}
inline qid_typ gettail(qid_typ q){return q+1;}

/* Function to check for bad pid */

inline isbadid(qid_typ x){
	return(x < 0 || x >= NQENT || x != (gettail(x) - 1));
}



/* Queue Manipulations functions   */

inline bool isempty(qid_typ q){return quetab[gethead(q)].next >= NPROC;}
inline bool isnonemty(qid_typ q){return quetab[gethead(q)].next < NPROC;}
inline bool firstkey(qid_typ q){return quetab[gethead(q)].next.key;}
inline bool lastkey(qid_typ q){return quetab[gettail(q)].prev.key;}




/* Queue funtioncs */

qid_typ get_first(qid_typ id);
qid_typ get_last(qid_typ id);
qid_typ getitem(qid_typ process);
qid_typ enqueue(qid_typ id);
qid_typ dequeue(qid_typ id);
qid_typ insert(qid_typ id, qid_typ q, qid_typ key);
qid_typ queinit();

