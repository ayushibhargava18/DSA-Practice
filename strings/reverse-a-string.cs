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
        public static string reverse(string s)
        {
            string[] word = s.Split(" ");
            string count = " ";
            for (int i = word.Length - 1; i >= 0; i--)
            {
                count = count + word[i] + " ";

            }
            return count;

        }
        public static void Main(string[] args)
        {
            string s = "The sky is blue";
            string reversed = reverse(s);
            Console.WriteLine(reversed);

        }
    }
}
