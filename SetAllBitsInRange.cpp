int SetAllBitsInRange(int num, int k){
	/*Your class should be named solution. 
	*Don't write main().
	*Don't take input, it is passed as function argument.
	*Don't print output.
	*Taking input and printing output is handled automatically.
	*/ 
	
	return ((1 << k) - 1) | num;
}
