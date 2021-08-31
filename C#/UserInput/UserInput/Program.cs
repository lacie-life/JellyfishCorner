using System;

namespace UserInput
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Console.Write("Enter your name: ");
            string name = Console.ReadLine();
            Console.Write("Hello" + name);

            Console.ReadLine();

        }
    }
}
