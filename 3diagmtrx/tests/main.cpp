#include <iostream>
#include <vector>
#include <gtest/gtest.h>
#include "../src/3/3diagmtrx.h"

TEST(method_progonka, value_test){

	diagmtrx A{
		{3.0, 3.0, 5.0},
		{5.0, 8.0, 9.0, 1.0},
		{1.0, 2.0, 2.0},
	};

	vector<double> f = {1.0, 2.0, 6.0, 12.0};
	vector<double> x = method_progonka(A, f);
	vector<double> right = {0.7164179104477612, -2.5820895522388060,10.2537313432835821, -39.2686567164179104};

	for(size_t i = 0; i < x.size(); i++){
		ASSERT_NEAR(x[i], right[i], 1e-12);
	}
}



int main(){
	testing::InitGoogleTest();
return RUN_ALL_TESTS();
}

