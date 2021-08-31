using System;

namespace IfStatements
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");

            bool isStupid = true;
            bool isDuck = true;

            // &&: and  ||: or 
            if (isStupid && isDuck)
            {
                Console.WriteLine("You are a stupid Duck");
            } else if ( !isStupid && isDuck )
            {
                Console.WriteLine("You are a Duck");
            } else
            {
                Console.WriteLine("You very stupid!!!");
            }

            Console.ReadLine();
        }
    }
}
