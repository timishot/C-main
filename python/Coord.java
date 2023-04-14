class Coord{
	Integer x;
	Integer y;

	Coord(Integer x, Integer y){
		this.x=x;
		this.y=y;
	}

	public static void main(String[] args)
	{
		Coord c = new Coord(10, 20);
		System.out.println("X Coordinate: " + c.x);
		System.out.println("Y coordinate: " + c.y);
	}
}

