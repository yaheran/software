Assert::AreEqual(2,example_test(1,1,1));
Assert::AreEqual(0,example_test(-1,-1,-1));
Assert::AreEqual(4,example_test(1,-1,1));
Assert::AreEqual(0,example_test(-1,1,-1));

void example_test(int x,int y,int z)
{
	if(x>0&&y>0)
	{
		z=z*z;
	}
	else
	{
		z=z+1;
	}
	if(z>0)
	{
		z=z*2;
	}
	return z;
}


