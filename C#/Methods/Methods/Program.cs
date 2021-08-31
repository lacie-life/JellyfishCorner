using System;

namespace Methods
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");

            SayHi("King");

            Console.ReadLine();
        }

        static void SayHi(string name )
        {
            Console.WriteLine("Hello User! " + name);
        }
    }
}
