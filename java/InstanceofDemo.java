public class InstanceofDemo{
	public static void main(String args[]){
		String name = "java";

		if(name instanceof String){
			System.out.println("an instance of String class");
		}

		if( name instanceof Object){
			System.out.println("an instance of a object class");
		}

		if(name instanceof CharSequence){
			System.out.println("an instance of Charsequence interface");
		}
	}
}
