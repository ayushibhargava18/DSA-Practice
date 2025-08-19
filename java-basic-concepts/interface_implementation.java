interface testinterface{
    int a=1000;
    
    void testfunction();
}

class testclass implements testinterface{
    public void testfunction(){
        System.out.println("Inside Interface");
    }
}


public class Main
{
	public static void main(String[] args) {
		testclass t = new testclass();
		System.out.println(t.a);
		t.testfunction();
	}
}
