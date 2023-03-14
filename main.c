#inclde <stdio.h>
static void setup(void);
int main(void){
	setup();
	while(1);
	return 1;
}

static void setup(void){
	print("set up done ");
}