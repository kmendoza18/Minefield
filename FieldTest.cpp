/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}

TEST(FieldTest, placeMineOut)
{
	Field minefield;
	
	minefield.placeMine(-2,3);
	ASSERT_EQ(minefield.get(-2,3);
}

/*
TEST(FieldTest, mineInBounds)
{
	Field minefield;

	ASSERT_EQ(true, minefield.inBounds(2,2) );	
}
*/

/*
TEST(FieldTest, getMineStatus)
{
	Field minefield;

	ASSERT_EQ("Out of bounds", minefield.get(-2,3) );
}
*/
