int reverse(int x){
	int flag = 0;
	long int temp = 0;

	if(x <0){
		x *= -1;
		flag = 1;
	}

	while(x != 0){
		temp += x%10;
		temp *= 10;
		x /= 10;
	}
	temp /= 10;

	if(temp > INT_MAX || temp < INT_MIN) x = 0;
	else x = temp;

	if(flag == 1) x *= -1;

	return x;
}
