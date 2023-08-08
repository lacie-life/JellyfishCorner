using System;

namespace WhileLoop
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");

            int index = 1;

            while(index <= 5)
            {
                Console.WriteLine(index);
                index++;
            }

            do
            {
                Console.WriteLine(index);
                index++;
            } while (index <= 10);

            Console.ReadLine();
        }
    }
}
