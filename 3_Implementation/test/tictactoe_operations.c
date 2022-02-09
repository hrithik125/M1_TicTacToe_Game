#include "unity.h"


/* Modify these two lines according to the project */
#include <tictactoe.h>
#define PROJECT_NAME    "Tictactoe"

/* Prototypes for all the test functions */

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_checkforwin);
  RUN_TEST(test_decision);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
