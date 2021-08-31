using System;

namespace MabLibsGame
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");

            string color, pluralNoun, celebrity;

            Console.Write("Enter a color: ");
            color = Console.ReadLine();
            Console.Write("Enter a plural noun: ");
            pluralNoun = Console.ReadLine();
            Console.Write("Enter a celebrity: ");
            celebrity = Console.ReadLine();


            Console.WriteLine("Roses are " + color);
            Console.WriteLine(pluralNoun + " are blue");
            Console.WriteLine("I love " +  celebrity);

            Console.ReadLine();
        }
    }
}
