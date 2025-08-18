class parent{
    void show(){
        System.out.println("parent class");
    }
}

class child extends parent{
    void show(){
        System.out.println("child class");
    }
}

public class Main
{
	public static void main(String[] args) {
	    child c=new child();
	    c.show();
	}
}
