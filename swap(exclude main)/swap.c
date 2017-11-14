void swap(int *a,int *b){//*を付けることで変数のポインタ受け取りが可能になる。
	int temp=*a;
	*a=*b;
	*b=temp;
}
