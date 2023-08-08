using System;

namespace SwitchExample
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("Hello World!");

            Console.WriteLine(GetDay(3));

            Console.ReadLine();
        }

        static string GetDay(int day)
        {
            string dayName;

            switch (day)
            {
                case 0:
                    dayName = "Sunday";
                    break;
                case 1:
                    dayName = "Monday";
                    break;
                case 2:
                    dayName = "Tuseday";
                    break;
                case 3:
                    dayName = "Wedseday";
                    break;
                case 4:
                    dayName = "Thursday";
                    break;
                case 5:
                    dayName = "Friday";
                    break;
                case 6:
                    dayName = "Saturday";
                    break;
                default:
                    dayName = "Invalid Day Number";
                    break;
            }
            return dayName;
        }
    }
}
