import java.util.*;


public class Main
{
	public static void main(String[] args) {
		String s1="ABCD";
		String s2="CDAB";
		
		if(isrotation(s1, s2)){
		    System.out.println("yes");
		}
		else{
		    System.out.println("no");
		}
	}
	
	
	static boolean isrotation(String s1, String s2){
	    if(s1.length()!=s2.length()){
	        return false;
	    }
	        String s3=s1+s1;
	        return s3.contains(s2);
	        
	    }
	}

