// testList.c - testing DLList data type
// Written by John Shepherd, March 2013

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "DLList.h"

static void status(DLList myList);

int main(int argc, char *argv[])
{
	DLList myList;
	myList = getDLList(stdin);
	putDLList(stdout,myList);
	assert(validDLList(myList));
	freeDLList(myList);
	// TODO: more tests needed here

    printf("        == test 1 ==         \n");
    DLList testList = newDLList();
    printf("testing\n");
    status(testList);
    printf("test 1 pass\n");
    printf("         == test 2 ==         \n");
    DLListAfter(testList, "line 4");
//    printf("%s\n", testList->curr->value);
    printf("testing");
    status(testList);
    printf("test 2 pass\n");
    DLListBefore(testList, "line 2");
    status(testList);
    DLListMove(testList, 1);
    status(testList);
    DLListBefore(testList, "line 3");
    status(testList);
    DLListMoveTo(testList, 1);
    status(testList);
    DLListBefore(testList, "line 1");
    status(testList);
    DLListMove(testList, 100);
    status(testList);
    DLListAfter(testList, "line 5");
    status(testList);
    DLListDelete(testList);
    printf("%d", DLListLength(testList));
    status(testList);
    freeDLList(testList);

	return 0;
}

static void status(DLList myList) {

//    printf("First Node Contents:\n%s", myList->first->value);
//    printf("Last Node Contents:\n%s", myList->last->value);
//    if(myList->curr != NULL) {
  //      printf("Current Node Contents:\n");
    //    DLListCurrent(myList);
   // }
    printf("Number of Elements in List: \n");
    DLListLength(myList);
    assert(validDLList(myList));
}
