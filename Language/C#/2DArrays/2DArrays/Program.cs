using System;

namespace _2DArrays
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");

            int[,] numberGrid = {
                { 0, 2, 4, 6, 8 },
                { 1, 3, 5, 7, 9 },
            };

            int[,] newArray = new int[2, 3];

            Console.WriteLine(numberGrid);

            Console.WriteLine(numberGrid[0, 1]);

            Console.ReadLine();
        }
    }
}
