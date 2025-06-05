using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;
 
namespace testt
{
    public class Program
    {
        public static void inputt() { 
            Console.WriteLine("Enter ur name- ");
            String Name = Console.ReadLine();
            Console.WriteLine("Enter marks");
            int marks = int.Parse(Console.ReadLine());
            string grade=position(marks);
            Console.WriteLine($"Student  { Name} Grade  {grade}"); 
        }
 
        public static string position(int x)
        {
            if (x >= 90)
            {
                 return "A";
            }
            else if (x >= 80 && x <= 90)
            {
                return "B";
            }
            else if (x >= 70 && x <= 80)
            {
                return "C";
            }
            else
            {
                return "Fail";
            }
        }
        public static void Main(string[] args) {
            inputt();
           
        }
    }
}
