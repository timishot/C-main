public class RelationalDemo{
	public static void main(String args[]){
		int x = 10;

		int y = 20;

		boolean result = x==y;

		System.out.println("x==y?" + result);

		result = x != y;
		System.out.println("x != y?" + result);

		result = x>y;

		System.out.println("x>y?" + result);
		result = x>=y;
		System.out.println("x>=y?" + result);

		result = x < y;

		System.out.println("x<y" + result);

		result = x <= y;

		System.out.println("x <= y?" + result);
	}
}

