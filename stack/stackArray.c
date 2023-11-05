// #include <stdio.h>

// #define N 5
// int stack[N];
// int top = -1;

// void push(){
// 	int x;
// 	printf("Enter data: ");
// 	scanf("%d", &x);
// 	if (top == N-1){
// 		printf("Overcondition");
// 	}else{
// 		top++;
// 		stack[top] = x;

// 	}
// }

// void pop(){
// 	  int item;
// 	  if(top == -1){
// 		printf("underflow"); 
// 	  }else{
// 		item = stack[top];
// 		top--;
// 		printf("%d", item);
// 	  }
// }

// void peek(){
// 	if (top == -1){
// 		printf("Underflow");
// 	}else{
// 		printf("%d", stack[top]);
// 	}
// }

// void display(){
// 	int i;
// 	for (i =top; i >=0; i--){
// 		printf("%d\n", stack[i]); 
// 	}
// }

// void main(){
// 	int ch;
	
// 	  do{
// 		printf("Enter choice: 1: push 2: pop 3:peek 4:display : ");
// 		scanf("%d", &ch);
// 		switch (ch)
// 		{
// 			case 1: push();
// 				break;
// 			case 2: pop();
// 				break;
// 			case 3: peek();
// 				break;
// 			case 4: display();
// 				break;
// 			default: printf("Invalid choice");
// 		}
// 	  }while(ch!=0);
// 	  getchar();
	 
// }

