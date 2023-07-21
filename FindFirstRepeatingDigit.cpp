int FindFirstRepeatingDigit(string digitpattern) {
	/*Your class should be named solution. 
	*Don't write main().
	*Don't take input, it is passed as function argument.
	*Don't print output.
	*Taking input and printing output is handled automatically.
	*/ 
	int ans = 0;
	int repeatingElement = -1;
	int n = digitpattern.size();
	for(int i = 0; i < n; i++){
		int val = digitpattern[i] -  '0';
		int mask = 1 << val;
		if((ans & mask) != 0){
			repeatingElement = val;
			break;
		}
		ans |= mask;
	}
	return repeatingElement;
}
