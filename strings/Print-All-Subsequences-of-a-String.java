import java.util.*;


public class Main
{
	public static void main(String[] args) {
		String s1 = "ABC";
		substrings(s1, "");
	}
	
	static void substrings(String str, String current){
	    if(str.isEmpty()){
	        System.out.println(current);
	        return;
	    }
	    
	    substrings(str.substring(1), current + str.charAt(0));
	    
	    substrings(str.substring(1), current);
	    

	    }
	}

