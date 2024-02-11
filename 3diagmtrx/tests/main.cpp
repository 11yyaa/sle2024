#include <iostream>
#include <vector>
#include <gtest/gtest.h>

TEST(method_progonka, value_test){

	3diagmtrx A{
		{3.0, 3.0, 5.0},
		{5.0, 8.0, 9.0, 1.0},
		{1.0, 2.0, 2.0},
	};

	vector<double> f = {1.0, 2.0, 6.0, 12.0};
	vector<double> x = method_progonka(A, f);
	vector<double> right = {7.37313432836, -11.9552238806,30.0895522388, -48.1791044776 };

	for(size_t i = 0; i < x.size(); i++){
		ASSERT_NEAR(x[i], right[i], 0.00001 * abs(x[i]));
	}



TEST(method_progonka, value_testik){

        3diagmtrx A{
                {5.0, 2.0},
                {9.0, 7.0, 1.0},
                {3.0, 3.0,},
        };

        vector<double> f = {3.0, 5.0, 7.0};
        vector<double> x = method_progonka(A, f);
        vector<double> right = {-8.0, 15.0, -38.0}

	for(size_t i = 0; i < x.size(); i++){
                ASSERT_NEAR(x[i], right[i], 0.00001 * abs(x[i]));
        }

TEST(method_progonka, neok){

        3diagmtrx A{
                {5.0, 2.0},
                {1.0, 0.0, 1.0},
                {3.0, 2.0,},
        };

        vector<double> f = {3.0, 5.0, 7.0};
        vector<double> x = method_progonka(A, f);

	EXPECT_THROW({method_progonka(A, f);}, invalid_argument)
	



int main(){
	testing::InitGoogleTest();
return RUN_ALL_TESTS();
}

