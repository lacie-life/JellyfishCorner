using System;

namespace ClassAndObjectExample
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");

            Book superman = new Book("Hello Bat Man", "Lacie", 1000);

            Console.WriteLine(superman.pages);

            Student student1 = new Student("Jonh", "King", 3.1);
            Student student2 = new Student("Sans", "Queen", 3.4);

            Console.WriteLine(student2.HasHonors());

            Movie movie1 = new Movie("Hello Bat Man", "Lacie", "PG-13");

            movie1.Rating = "PG";

            Console.WriteLine(movie1.Rating);

            Tools.SayHi("Nho");



            Console.ReadLine();
        }
    }
}
