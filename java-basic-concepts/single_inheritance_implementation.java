class parent{
    void display(){
        System.out.println("Inside parent class");
    }
}

class child extends parent{
    void show(){
        System.out.println("Inside child class");
    }
}


public class Main
{
	public static void main(String[] args) {
		child t = new child();
		t.display();
		t.show();
	}
}
