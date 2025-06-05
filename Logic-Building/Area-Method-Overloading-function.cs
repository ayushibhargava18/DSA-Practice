using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;
 
namespace testt
{
    public class Program
    {
        public static int Area(int a) {
            int sum = a * a;
            return sum;
        }
        public static int Area(int a, int b)
        {
            int sum = a * b;
            return sum;
        }
        public static double Area(double a, double h)
        {
            double sum = 0.5 * a * h;
            return sum;
        }
        public static void Main(string[] args) {
            Console.WriteLine("Area of rectangle- " + Area(5, 6));
            Console.WriteLine("Area of square- " + Area(5));
            Console.WriteLine("Area of triangle- " + Area(5.0, 6.0));
 
        }
    }
}
