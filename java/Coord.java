class Coord
{
	Integer x;
	Integer y;

	Coord(Integer x, Integer y)
	{
		this.x = x;
		this.y = y;
	}
	Coord move(Integer dx, Integer dy)
	{
		return new Coord(this.x + dx, this.y + dy);
	}

	public static void main(String args[])
	{
		Coord c1 =  new Coord(1, 2);
		Coord c2 = c1.move(3,4);
		System.out.println("c1: " + c1.x + ", " + c1.y);
		System.out.println("c2: " +c2.x + ", " + c2.y);
	}
}
