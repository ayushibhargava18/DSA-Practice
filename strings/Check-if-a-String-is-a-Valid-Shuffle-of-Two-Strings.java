import java.util.*;


public class Main
{
	public static void main(String[] args) {
		String s1 = "AB";
        String s2 = "CD";
        String s3 = "ADBC";
		
		if(validshuffle(s1, s2, s3)){
		    System.out.println("yes");
		}
		else{
		    System.out.println("no");
		}
	}
	
	
	static boolean validshuffle(String s1, String s2, String s3){
	    if(s1.length() + s2.length() != s3.length()){
	        return false;
	    }
	    int i=0; 
	    int j=0;
	    int k=0;
	        
	    while(k<s3.length()){
	        if(i<s1.length() && s3.charAt(k)==s1.charAt(i)){
	            i++;
	        }
	        else if(j<s2.length() && s3.charAt(k)==s2.charAt(j)){
	            j++;
	        }
	        else{
	            return false;
	        }
	        k++;
	    }
	    return(i==s1.length() && j==s2.length());
	        
	    
	        
	    }
	}

